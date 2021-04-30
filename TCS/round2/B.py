t=int(input())
def getAns(n,dp):
    if(n<0):
        return 0
    if(n==0):
        return 1
    if(n==1):
        return 2
    if(n==2):
        return 4
    if(dp[n]!=-1):
        return dp[n]
    dp[n] = getAns(n-1,dp)+getAns(n-2,dp)+getAns(n-3,dp)
    return dp[n]
while(t):
    n=int(input())
    dp = [-1 for i in range(n+1)]
    res=getAns(n,dp)
    print(res,end=" ")
    t-=1
