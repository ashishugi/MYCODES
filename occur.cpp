#include<iostream>
using namespace std;
void fun(int ar[],int n)
 {
 
  if(n==0)
 {
   return;
  }
 else
 {
   for(int i=1;i<=n;i++)
   {
     fun(ar,n-1);
     cout<<ar[n]<<" ";
    }
    cout<<endl;
  }
}

int main(void)
 {
  
  int ar[111];
  int n;
  cin>>n;
  cout<<"enter the elements ";
  cout<<endl;
  for(int i=1;i<=n;i++)
  {
   cin>>ar[i];
   }
  fun(ar,n);
}

     
