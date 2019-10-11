#include<iostream>
using namespace std;
int n;
void countsort(int *ar,int k)
{
   int *c=new int[k];
   int *b=new int[n];
  
   for(int i=0;i<=k;i++)
   {
    c[i]=0;
   }
  
   
   
   for(int i=1;i<=n;i++)
   {
    c[ar[i]]=c[ar[i]]+1;
   }
   
    for(int i=1;i<=k;i++)
   {
    c[i]=c[i]+c[i-1];
   }
   
   for(int i=n;i>=1;i--)
   {
    b[c[ar[i]]]=ar[i];
    c[ar[i]]=c[ar[i]]-1;
    }
    
    for(int i=1;i<=n;i++)
   { ar[i]=b[i];
    
   }
}
   
   
   
   
int main(void)
  {
  int ar[100];
  cout<<"enter the size of array";
  
  cin>>n;
 // ar = new int[n];
  cout<<"enter the elements\n";
  for(int i=1;i<=n;i++)
  {
   cin>>ar[i];
  }
 
  int k;
  cout<<"\n enter the maximum value of the array";
  cin>>k;
  countsort(ar,k);
  cout<<"\nthe sorted array from the counting sort is in main function is \n";
  for(int i=1;i<=n;i++)
  {
   cout<<" "<<ar[i];
  }
  
  
  
} 
