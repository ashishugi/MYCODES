#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll dp[100][100];
ll countWaysToMakeChange(int denominations[], int numcoins, int value){
    if(numcoins == 0){
        return 0;
    }
    if(value< 0){
        return 0;
    }
    if(value == 0){
        return 1;
    }
    if(dp[numcoins][value]>0){
        return dp[numcoins][value];
    }
    int first = countWaysToMakeChange(denominations+1 , numcoins-1 , value); // not taken
    int second = countWaysToMakeChange(denominations , numcoins,value - denominations[0]); // value is taken
    dp[numcoins][value] = first+second;
    return first+second;
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int v;
    cin>>v;
    ll result = countWaysToMakeChange(ar , n , v);
    cout<<result<<endl;
}