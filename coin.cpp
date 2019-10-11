#include<iostream>
#include<cstdio>
using namespace std;
int coin(int n,int x)
{
 int a;
 if(n<12)
 {
 return n;
 }
 else
 {
   a = coin(n/2,n)+coin(n/3,n)+coin(n/4,n);
   return max(a,n);
  }
}
int main(void)
{
   char ch='y';
   int res,n;
   while(ch=='y' || ch=='Y')
   {
   cout<<"enter the number for which you needed the solution \n";
   cin>>n;
   res = coin(n,n);
   cout<<"\n result is :  "<<res;
   cout<<endl;
   cout<<"Do you want to enter more y/n \n";
   cin>>ch;
 }
}
