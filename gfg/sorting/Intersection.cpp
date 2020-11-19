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
vector<int> intersection(vector<int>& ar1,vector<int>& ar2){
    vector<int> res;
    int i = 0,j=0;
    while(i<ar1.size() && j<ar2.size()){
        if(ar1[i] == ar2[j]){
            res.push_back(ar1[i]);
            int value = ar1[i];
            while(i< ar1.size() && ar1[i] == value){
                i++;
            }
            while(j < ar2.size() && ar2[j] == value){
                j++;
            }
        }else if(ar1[i] > ar2[j]){
            j++;
        }else{
            i++;
        }
    }
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> ar1(n,0),ar2(m,0);
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(int i=0;i<m;i++){
        cin>>ar2[i];
    }
    vector<int> res = intersection(ar1,ar2);
    for(auto x : res){
        cout<<x<< " ";
    }
    cout<<endl;
    return 0;
}