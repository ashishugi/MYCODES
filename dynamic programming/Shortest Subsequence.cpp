int solvehelper(string str,string V,int len1,int len2,int **dp){
    if(len1 == 0){
        return INT_MAX-20;
    }
    if(len2==0){
        return 1;
    }
    if(dp[len1][len2]!=-1){
        return dp[len1][len2];
    }
    int ans1 = solvehelper(str.substr(1),V,len1-1,len2,dp);
    int ans2;
    char ch = str[0];
    int index=-1;
    for(int i=0;i<V.length();i++){
        if(ch == V[i]){
            index = i;
            break;
        }
    } 
    if(index==-1){
        return 1;
    }
         ans2 = 1+solvehelper(str.substr(1), V.substr(index+1) , len1-1,len2-index,dp);
  int ans =min(ans1,ans2);
    dp[len1][len2] = ans;
    return ans;
}
int solve(string str,string V)
{    int len1= str.length();
     int len2= V.length();
	int **dp = new int*[len1+1];
     for(int i=0;i<=len1;i++){
         dp[i] = new int[len2+1];
         for(int j=0;j<=len2;j++){
             dp[i][j]=-1;
         }
     }
     int ans = solvehelper(str,V,len1,len2,dp);
     return ans;
}
