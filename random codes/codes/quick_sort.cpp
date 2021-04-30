#include<iostream>
using namespace std;
int partition(int [],int,int);
void quick_sort(int ar[],int l,int u)
{
   if(l<u)
   {
     int q = partition(ar,l,u);
     quick_sort(ar,l,q);
     quick_sort(ar,q+1,u);
    }
}


int partition(int ar[],int l,int u)
 { 
     int key=ar[u];
     int i=l-1;
     
     for(int j=l;j<=u-1;j++)
     {
       if(ar[j]<=key)
       {
        i++;
        swap(ar[i],ar[j]);
       }
     }
     i=i+1;
     swap(ar[i],ar[u]);
 return i;
}
 int main(void)
 { int ar[100],n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    cin>>ar[i];
   }
   
   quick_sort(ar,1,n);
    
    
    for(int i=1;i<=n;i++)
    {
    cout<<ar[i]<<"  ";
    }
 }
   
