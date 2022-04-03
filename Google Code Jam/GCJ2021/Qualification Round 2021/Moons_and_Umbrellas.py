def calculate_amount(strng):
    amount = 0
    for i in range(len(strng)-1):
        if strng[i:i+2] == 'CJ':
            amount = amount + x
        elif strng[i:i+2] == 'JC':
            amount = amount + y
    return(amount)

for t in range(int(input())):
    x,y,s = map(str,input().split())
    x = int(x)
    y = int(y)
    amount = 0
    temp_amt = 0
    i = 0
    ans = 0
    count_C = s.count('C')
    count_J = s.count('J')
    count = s.count('?')

    ssc = ""
    ssj = ""
    anscj = 0
    ansjc = 0

    if count == 0:
        ans = calculate_amount(s)
    elif count_C == 0:
        s = s.replace('?','J')
        ans = calculate_amount(s)
    elif count_J == 0:
        s = s.replace('?','C')
        ans = calculate_amount(s)
    else:
        while (i != len(s) - 1):
            if (s[i] == 'C' and s[i+1] == 'J'):
                ans = ans + x
                i += 1
            elif (s[i] == 'J' and s[i+1] == 'C'):
                ans = ans + y
                i += 1
            elif (s[i] == 'C' or s[i] == 'J'):
                i += 1
            else:
                ssc = s
                ssj = s
                anscj = ans
                ansjc = ans
                for j in range(i,len(s)):
                    if (s[j] != '?'):
                        ssc = ssc.replace(ssc[j],s[j],1)
                        ssj = ssj.replace(ssj[j],s[j],1)
                        if (ssc[j-1] == 'J' and ssc[j] == 'C'):
                            ansjc += y
                        elif (ssj[j-1] == 'C' and ssj[j] == 'J'):
                            anscj += x
                        elif (ssc[j-1] == 'C' and ssc[j] == 'J'):
                            ansjc += x
                        elif (ssj[j-1] == 'J' and ssj[j] == 'C'):
                            anscj +=y
                            i = j
                            break
                    else:
                        ssc = ssc.replace('?','C',1)
                        ssj = ssj.replace('?','J',1)
                        if (ssc[j-1] == 'J' and ssc[j] == 'C'):
                            ansjc += y
                        elif (ssj[j-1] == 'C' and ssj[j] == 'J'):
                            anscj += x
                        elif (ssc[j-1] == 'C' and ssc[j] == 'J'):
                            ansjc += x
                        elif (ssj[j-1] == 'J' and ssj[j] == 'C'):
                            anscj += y
                if ansjc < anscj:
                    s = ssc
                    ans = ansjc
                else:
                    s = ssj
                    ans = anscj

    print('case #'+str(t+1)+':',ans)
