#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int dp[10];
int rod_cutting(int price[],int n)
{
   if(dp[n]>0)
   {
     return dp[n];
    }
   if(n==0)
   {
   return 0;
   }
   
     int q=-2;
    for(int i=1;i<=n;i++)
     {
     q = max(q,price[i]+rod_cutting(price,n-i));
     dp[n]=q;
     }
     
     
     return q;
 
 
 
} 
 
 
 
  
int main(void)
{

 int price[30],value[30],n;
 // price = new int;
 // value = new int;
  cout<<"enter the length of the rod\n";
  cin>>n;
  cout<<"enter the  price as per the value \n";
 for(int i=1;i<=n;i++)
 {
   dp[i]=0;
    value[i]=i;
    cout<<"enter the price for rod part "<<value[i]<<":";
    cin>>price[i];
 
 }   
 cout<<endl;
 
 int res =0;
 res = rod_cutting(price,n);
 cout<<"the maximum value which we can get is :\n"<<res<<endl;
 cout<<"Now the array of thr dp is shown below\n";
 for(int i=1;i<=n;i++)
 {
 cout<<dp[i]<<" ";
 }
 
 
 
}
