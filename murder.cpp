#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int merge(int ar[],int low,int mid,int high){
    int temp[low+high+1];
    int i=low;
    int j=mid+1;
    int sum =0;
    int k=0;
    while(i<=mid && j<=high){
        if(ar[i]<ar[j]){
            int num = high - j+1;
            sum = sum+(num*ar[i]);
            temp[k]  = ar[i];
            k++;
            i++;
            
         }
         else{
             temp[k] = ar[j];
             k++;
             j++;
         }
    }
    while(i<=mid){
        temp[k]= ar[i];
        i++;
        k++;

    }

  while(j<=high){
        temp[k]= ar[j];
        j++;
        k++;
   }
   k=0;
   
   for(i=low;i<=high;i++){
       ar[i]=temp[k];
       k++;
   }
 return sum;
}
int solve(int ar[],int low,int high){
    int count =0 ;
  if(low<high){
    int mid = (low+high)/2;
    int count_left = solve(ar,low, mid);
    int count_right = solve(ar,mid+1,high);
    int count = merge(ar,low,mid,high);
    return count_left+count_right+count;
  }
 return count;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *ar = new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
       int ans = solve(ar,0,n-1);
       cout<<ans<<endl;
    }
}