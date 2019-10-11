#include<iostream>
#include<stdlib.h>
#include<climits>
using namespace std;
void buildmax(int []);
int maxheapify(int [],int);
int size,heapsize;
int maxheapify(int ar[],int i)
 {
  int l=2*i;
  int r=2*i+1;
  int large=i;
  if(ar[i]<ar[l] && l<=heapsize)
  {
   large=l;
   }
   if(ar[large]<ar[r] && r<=heapsize)
   {
    large=r;
   }
   if(large!=i)
   {
      swap(ar[i],ar[large]);
      maxheapify(ar,large);
    }
}

// End of Maxheapify

void buildmax(int ar[])
{
  for(int i=size/2;i>=1;i--)
  {
     maxheapify(ar,i);
   }
}
// End of buildmax;


void heapsort(int ar[])
{ 
   buildmax(ar);
   //int temp_size=size;
   for(int i=size;i>1;i--)
   {
      swap(ar[heapsize],ar[1]);
      heapsize=heapsize-1;
      maxheapify(ar,1);
   }
}

/// end of heap sort
void maxheapincrease(int ar[],int i,int key)
{
    if(key<ar[i])
    {
     cout<<"error no use of this function\n";
     }
     else
     {
      while(i>1 && ar[(i/2)]<key)
      {
       swap(ar[i],ar[(i/2)]);
       i=i/2;
      }
     }
} 


void heapinsert(int ar[],int key)
{
  
  heapsize=heapsize+1;
  int i=heapsize;
  ar[i]=key;
  maxheapincrease(ar,i,key);
}

int main(void)
{
  int *ar;
  cout<<"enter the array size";
  cin>>size;
  heapsize=size;
  ar=(int *)malloc(size*sizeof(int));
  cout<<"enter elements \n";
  for(int i=1;i<=size;i++)
  {
   cin>>ar[i];
  }
 heapsort(ar);
 //maxheapincrease(ar,5,70);
 //heapinsert(ar,1000);
  cout<<"\n the resultant array is \n";
   for(int i=1;i<=size;i++)
  {
   cout<<ar[i]<<" "<<endl;
  }
  
}  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  















