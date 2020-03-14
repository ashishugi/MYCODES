#define loop(i,n) for(int i=0;i<n;i++)
class Solution {
public:
    int minDistance(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        int** dp = new int*[n+1];
        if(n==0){
            return m;
        }
        if(m==0){
            return n;
        }
        loop(i,n+1){
            dp[i] = new int[m+1];
            loop(j,m+1){
                dp[i][j] =0 ;
            }
        }
        loop(i,n+1){
            dp[i][0] = i;
        }
        loop(i,m+1){
            dp[0][i]=i;
        }
       
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1+min(dp[i-1][j-1] , min(dp[i-1][j] , dp[i][j-1]));
                }
               // cout<<dp[i][j]<< " ";
            }
            //cout<<endl;
        }
        return dp[n][m];
    }
};