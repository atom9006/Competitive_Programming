def rev(x):
    return x[::-1]

t = int(input())

for tt in range(1, t + 1):
    n = int(input())
    ans = 0
    ind = 0
    lst = list(map(int, input().split()))
    for i in range(n - 1):
        mn = 10001
        for j in range(i, n):
            if lst[j] <= mn:
                mn = lst[j]
                ind = j
        lst = lst[:i] + rev(lst[i:ind + 1]) + lst[ind + 1:]
        # print(i, ind)
        ans += (ind - i + 1)
    print("Case #{}: {}".format(tt, ans))
