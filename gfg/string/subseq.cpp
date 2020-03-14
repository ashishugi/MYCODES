#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getnumber(string s1,string s2,int** dp){
    if(s2.length()==0){
        return 1;
    }
    if(s1.length()==0){
        return 0;
    }
    if(dp[s1.length()][s2.length()]!=-1){
        return dp[s1.length()][s2.length()];
    }
    int ans1=0,ans2=0;
    if(s1[0] == s2[0]){
        ans1= (getnumber(s1.substr(1) , s2.substr(1) ,dp)  + getnumber(s1.substr(1) , s2,dp) );
    }
    if(s1[0]!=s2[0]){
        ans2 = getnumber(s1.substr(1),s2,dp);
    }
    dp[s1.length()][s2.length()] = ans1+ans2;
    return ans1+ans2;

}
int main(void){
    string s1,s2;
    cin>>s1>>s2;
    int len1= s1.length();
    int len2 = s2.length();
    int** dp = new int*[len1+1];
    for(int i=0;i<=len1;i++){
        dp[i] = new int[len2+1];
        for(int j=0;j<=len2;j++){
            dp[i][j]=-1;
        }
    }
    cout<<getnumber(s1,s2,dp)<<endl;

  return 0;
}