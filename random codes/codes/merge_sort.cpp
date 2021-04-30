#include<iostream>
#include<climits>
using namespace std;
void merge(int [],int ,int ,int);
void merge_sort(int ar[],int l,int u)
 {
  if(l<u)
  {
    int mid=(l+u)/2;
    merge_sort(ar,l,mid);
    merge_sort(ar,mid+1,u);
    merge(ar,l,mid,u);
   }
}
void merge(int arr[],int l,int mid,int u){
    int i=l;
    int j=mid;
    int k=0;
    int temp[u+1];
    while(i<mid && j<=u);
    {
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=u){
        temp[k]=arr[j];
        k++;
        j++;
    }
    k=0;
    for(int m=l;m<=u;m++){
        arr[m]=temp[k];
        k++;
    }
    
    
    
}
/*void merge(int ar[],int left,int mid,int u)
 {
   int l[100],r[100];
   int n1,n2;
   n1=mid-left+1;
   n2=u-mid;
   int i=1;
   for(i=1;i<=n1;i++)
   {
    l[i]=ar[left+i-1];
    }
    l[i]=9999;
    int j=1;
    for(i=1;i<=n2;i++)
    {
     r[i]=ar[mid+i];
     
    }
    r[i]=9999;
    
    
    
  /*  for(int i=1;i<=n1;i++)
    {
     cout<<l[i]<<"and "<<r[i]<<endl;
    }
    i=1;
    j=1;

    for(int m=left;m<=u;m++)
    {
      if(l[i]<=r[j])
      {
       ar[m]=l[i];
       i++;
       
      }
      else if(l[i]>r[j])
      {
       ar[m]=r[j];
       j++;
      }
     }
 }
 
 */
 int main(void)
 {
      
     
      int n;
      cin>>n;
       int ar[20];
      for(int i=0;i<n;i++)
      {
       cin>>ar[i];
      }
      
      cout<<"\nthe entered array is \n";
      for(int i=0;i<n;i++)
      {
       cout<<ar[i]<<" " ;
      }
      
       cout<<endl;
     // merge(ar,1,3,n);
      merge_sort(ar,0,n-1);
       
      cout<<"\nthe resultant sorted array is \n";
      
      
      
       for(int i=0;i<n;i++)
      {
       cout<<ar[i]<<" " ;
      }
      
      
} // end of main.   
      
      
      
    
