t=int(input())
while(t):
    k1=float(input())
    k2=float(input())
    k3=float(input())
    v=float(input())
    res=k1*k2*k3*v
    res = 100/res
    if(res < 9.58):
        print('Yes')
    else:
        print('NO')
    t=t-1

