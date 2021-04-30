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
double getAns(vector<int>& ar,vector<pair<int,double>>& range){
    int point=-1;
    int len = ar.size();
    for(int i=len-1;i>=0;i--){
        if(ar[i] != i){
            point=i;
            break;
        }
    }
    if(point == -1){
        return 1.000000;
    }
    double positive= 0.0;
    double negative = 1.0;
    for(int i=0;i<range.size();i++){
        pair<int,double> curr = range[i];
        if(curr.first >= point){
            positive += curr.second*negative;
            negative = negative * (1.0 - curr.second);
        }
    }
    return positive;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        vector<pair<int,double>> range;
        vector<int> ar(n,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            ar[i]--;
        }
        for(int i=0;i<m;i++){
            int r;
            double p;
            cin>>r>>p;
            range.push_back({r-1,p});
        }
        double res = getAns(ar,range);
        cout<<setprecision(6)<<fixed<<res<<endl;
    }
    return 0;
}