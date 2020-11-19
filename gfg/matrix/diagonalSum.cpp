#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int maxDiagonalSum(int** ar,int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mp[(i-j)]+=ar[i][j];
        }
    }
    int maxSum = INT_MIN;
    for(auto x : mp){
        // cout<<x.first<< " "<<x.second<<endl;
        if(maxSum  < x.second){
            maxSum = x.second;
        }
    }
    return maxSum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int** ar = new int*[n];
    for(int i=0;i<n;i++){
        ar[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    int maxSum = maxDiagonalSum(ar,n);
    cout<<maxSum<<endl;
    return 0;
}