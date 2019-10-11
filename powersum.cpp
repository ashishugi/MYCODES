#include<iostream>
#include<cstdio>
using namespace std;
int size;
int rec(int x,int n)
{

  if(x==n)
  {
   return 1;
   }
  if(n==0)
  {
  return 0;
  }
   
   int ans=0;
   for(int i=size;i>0;i--)
   {
    
     ans =  rec(x,i*i);
     
    }
    return ans;
}
int main(void)
{

int x,n;
 cout<<"enter the value for the x\n";
 cin>>x;
 cout<<"enter the value of n \n";
 cin>>n;
 size=n;
 int res = rec(x,n);
 cout<<res<<endl;
}
