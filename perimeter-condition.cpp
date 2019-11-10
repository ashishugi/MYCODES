#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {

	// Write your code here
    int n;
    cin>>n;
    ll *ar = new ll[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar ,ar+n);
    int flag=0;
    for(int i=n-3;i>=0;--i){
        int a= ar[i];
        int b= ar[i+1];
        int c= ar[i+2];
        if(a+b > c && a+c>b && b+c>a){
            cout<<a<<" "<<b<<" "<<c<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }

    
}