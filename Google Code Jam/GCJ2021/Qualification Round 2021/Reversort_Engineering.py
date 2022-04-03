def permutation(lst):
    if len(lst) == 0:
        return([])

    if len(lst) == 1:
        return([lst])

    l = []
    for i in range(len(lst)):
        m = lst[i]
        remLst = lst[:i] + lst[i+1:]
        for p in permutation(remLst):
            l.append([m] + p)
    return l

def rev(x):
    return x[::-1]

def revsort(lst):
    ans = 0
    ind = 0
    n = len(lst)
    for i in range(n - 1):
        mn = 10001
        for j in range(i, n):
            if lst[j] <= mn:
                mn = lst[j]
                ind = j
        lst = lst[:i] + rev(lst[i:ind + 1]) + lst[ind + 1:]
        # print(i, ind)
        ans += (ind - i + 1)
    return ans

t = int(input())

for tt in range(1, t + 1):
    n, c = map(int, input().split())
    ans = []
    a = [i for i in range(1, n + 1)]
    lst = permutation(a)
    for l in lst:
        if revsort(l) == c:
            ans = l
            break;

    if ans:
        print("Case #{}: ".format(tt), end = ""),
        print(*ans)

    else:
        print("Case #{}: {}".format(tt, "IMPOSSIBLE"))
