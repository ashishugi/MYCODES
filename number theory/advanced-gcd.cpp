#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(int a,int b){
    if(b>a){
        return gcd(b,a);
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return gcd(b,a%b);
    }
}
int main(){
	// Write your code here
    int t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
         string b;
        cin>>b;
        if(a==0){
            cout<<b<<endl;
        }else{
            int val;
            int pre =0;
            for(int i=0;i<b.length();i++){
                pre= (pre*10+(b[i]-'0'))%a;
            }
            cout<<gcd(a,pre)<<endl;
        }
    }
	return 0;
}