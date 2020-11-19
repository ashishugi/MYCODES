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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    unordered_set<int> first;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        first.insert(ar[i]);
    }
    int m;
    cin>>m;
    int* ar2 = new int[m];
    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }
    int count =0;
    for(int i=0;i<m;i++){
        if(first.find(ar2[i]) != first.end()){
            count++;
            first.erase(ar2[i]);
        }
    }
    cout<<count<<endl;
    return 0;
}