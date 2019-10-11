#include<iostream>
using namespace std;
long long int a,b,res;
long long int dp[1000];
int xorinacci(long long int n)
 {
  if(n==0)
  {
   return a;
  }
  if(n==1)
  {
   return b;
  }
  if(dp[n]!=0)
  {
   return dp[n];
  }
  
   else
   {
     dp[n]= (xorinacci(n-1)^xorinacci(n-2));
     return dp[n];
     
     }
}
int main(void)
{
  long int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  { long long int n;
  cin>>a;
  cin>>b;
  cin>>n;
   res=xorinacci(n);
   cout<<res<<endl;
   }
}
   
   
   
   
   
