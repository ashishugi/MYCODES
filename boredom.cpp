#include<bits/stdc++.h>
#include<map>
using namespace std;
int game(int *ar , int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return ar[n];
    }
    int ans1 = game(ar+2 ,n-2 );
    int ans2 = game(ar+1 ,n-1);
    int res = max(ans1,ans2);
    return res;
}
int game_iterative(int *ar ,int n, map<int ,int> freq){
    int *output = new int[n+1];
    output[0] = 1;
    output[1] = ar[1];
    for(int i=2;i<n;i++){
        output[i] = max(ar[i]+output[i-2] , output[i-1]);
    }
    int ans = output[n-1];
    delete [] output;
    return ans;
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    map<int ,int> freq;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        freq[ar[i]]++;
    }
    int res = game_iterative(ar ,n , freq);
    cout<<res<<endl;
}