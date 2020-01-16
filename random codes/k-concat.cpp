#include<iostream>
#include<climits>
using namespace std;
long long int kadane(int ar[],int size){
    long long int curr_max=0;
    long long int max_so_far =0;
    for(int i=0;i<size;i++){
        curr_max+=ar[i];
        if(curr_max<0){
            curr_max=0;
        }
        if(max_so_far<curr_max){
            max_so_far=curr_max;
        }
    }
    return max_so_far;
}
long long int arraysum(int ar[],int size,int k){
    long long int sum=kadane(ar,size);
   long long int final_sum=0;
     long long int suffix_sum= INT_MIN ,prefix_sum=INT_MIN;
     long long int suffix_so_far=0,prefix_so_far=0;
     if(k==1){
         return sum;
     }
     long long int total=0;
     /* for(int i=0;i<size;i++){
         total+=ar[i];
     }*/
     for(int i=0;i<size;i++){
         prefix_so_far+=ar[i];
         prefix_sum = max(prefix_so_far,prefix_sum);
     }
     total=prefix_so_far;
     for(int i=size-1;i>=0;i--){
         suffix_so_far+=ar[i];
         suffix_sum = max(suffix_so_far,suffix_sum);
     }


    if(total>=0){
        
        final_sum = max(sum,(suffix_sum+prefix_sum+((k-2)*total)));
    }
    else{
        final_sum = max(prefix_sum+suffix_sum,sum);
    }
    return final_sum;
}
int main(void){
    int t;
    cin>>t;
  while(t!=0){
   int n;
    cin>>n;
     int ar[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
   cout<< arraysum(ar,n,k)<<endl;
    t--;
  }
}