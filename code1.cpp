#include<bits/stdc++.h>
using namespace std;
#define MAXN 100005
long long int merge(int arr[],int l,int mid,int h){
 int n1 = mid-l+1;
    int n2 = h-mid;
    int i=l;
    int j=mid;
    
    long long int count=0;
     int temp[h+1];
     int k=0;
   while(i<mid && j<=h){
     if(arr[i]>arr[j]){
      temp[k]=arr[j];
      j++;
      k++;
      count+=mid-i;
      }
      else{
       temp[k]=arr[i];
       i++;
       k++;
       }
     }
     while(i<mid){
      temp[k]=arr[i];
      i++;
      k++;
      }
      while(j<=h){
      temp[k]=arr[j];
      k++;
      j++;
      }
      
      int n=0;
      for(int m=l;m<=h;m++){
      arr[m]=temp[n];
      n++;
      }
    return count; 
}
long long int sort(int a[],int l,int h){
    int ans=0;
    if(l<h){
        int mid =(l+h)/2;
        int l_count = sort(a,l,mid);
        int r_count = sort(a,mid+1,h);
        int count   =  merge(a,l,mid,h);
        return (l_count+r_count+count);
    }
    return ans;
}
long long solve(int A[], int n)
{
	// Write your code here.
   long long int ans  = sort(A,0,n-1);
    cout<<"sorted array is \n";
      for(int i=0;i<n;i++){
     cout<<A[i]<< " ";
  }
    cout<<endl;
    return ans;
}

int main()
{
	int n,A[MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
 
}
