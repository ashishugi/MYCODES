#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(void)
{
  int *ar;int x;
  ar  = (int *)malloc(sizeof(int));
  cout<<"enter the elements 8 elements \n ";
 for(int i=1;i<=8;i++)
  {
   ar[i]=0;
  }
  cout<<"the elements of the hash table before ";
  for(int i=1;i<=8;i++)
  {
     cout<<ar[i]<<" ";
  }
  cout<<endl;
  for(int i=1;i<=8;i++)
  {
   cin>>x;
    ar[x]=x;
  }
 // let the elements be 8 , slots for them i.e m=8,k=8
   cout<<"Now the elements after hashing is \n";
   for(int i=1;i<=8;i++)
   {
   cout<<ar[i]<<" ";
   }
}
