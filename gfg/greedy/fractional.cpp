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
bool compare(const pair<double,double>& a,const pair<double,double>& b){
    return ((a.second/a.first) > (b.second/b.first));
}
double fractional(vector<pair<double,double>>& ar,int weight){
    sort(ar.begin(),ar.end(),compare);
    // vector<pair<double,double>> ar;---> first , second = > weight , price .
    int len = ar.size();
    double cost =0;
    for(int i=0;i<len;i++){
        if(weight - ar[i].first >=0 ){
            cost+=ar[i].second;
            weight =weight - ar[i].first;
        }else{
            cost += ((weight)*ar[i].second)/ar[i].first;
            break;
        }
    }
    return cost;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<double,double>> ar;// first , second = > weight , price .
    for(int i=0;i<n;i++){
        pair<double,double> temp;
        cin>>temp.first;
        cin>>temp.second;
        ar.pb(temp);
    }
    int weight;
    cin>>weight;
    double res = fractional(ar,weight);
    cout<<res<<endl;
    return 0;
}