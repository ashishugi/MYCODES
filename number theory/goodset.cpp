#include<bits/stdc++.h>
#define m 1000000007
using namespace std;

int main(){
	// Write your code here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        long long* arr=new long long[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        long long max=arr[n-1];
        long long* siv=new long long[max+1]();
        for(long long i=0;i<n;i++){
            siv[arr[i]]=1;
        }
        
        
        for(long long i=1;i<=max;i++){
            if(siv[i]){
                
                for(long long j=2;j*i<=max;j++){
                    if(siv[j*i]){
                        siv[j*i]=((siv[j*i])%m+siv[i]%m)%m;
                    }
                }
            }
        }
        
        long long sum=0;
        for(long long i=0;i<=max;i++){
            if(siv[i]){
                sum=((siv[i])%m + sum%m)%m;
            }
        }
        
        cout<<sum<<endl;
    }
	return 0;
}