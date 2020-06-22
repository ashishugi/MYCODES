#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
unordered_set<int> getprime(int n){
    unordered_set<int> rprime;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            rprime.insert(i);
            n/=i;
        }
    }
    if(n>1){
        rprime.insert(n);
    }
    return rprime;
}
int main(void){
    int n;
    cin>>n;
    unordered_set<int> prime = getprime(n);
    for(auto x : prime){
        cout<<x<< " ";
    }
    cout<<endl;
    return 0;
}