from itertools import permutations
import math
def number(num):
    s=''
    for i in range(len(num)):
        s+=num[i]
    return int(s)
def solution(l):
    l.sort()
    maximum =0
    for i in range(0,len(l)+1):
        for j in range(0,len(l)+1):
            st =list(l[i:j])
            st.sort()
            a = ""
            for i in range(len(st)):
                a+=str(st[i])
            if(len(a)==0):
                continue
            permlist = permutations(a)
            for per in list(permlist):
                print(per)
                value = number(list(per))
                if(value%3 == 0 and value >=maximum):
                    print(value)
                    maximum = value
    return maximum
        
ans = solution([3, 1, 4, 1, 5, 9])
print(ans)