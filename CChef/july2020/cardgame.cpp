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
#define pop pop_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int get(string s){
    int sum =0;
    for(int i=0;i<s.length();i++){
        int a = s[i]-'0';
        sum+=a;
    }
    return sum;
}
void getans(vector<pair<string ,string >>& ar,int n){
    int chef =0;
    int M=0;
    for(int i=0;i<ar.size();i++){
        int a = get(ar[i].first);
        int b = get(ar[i].second);
        if(a > b){
            chef++;
        }else if(a < b){
            M++;
        }else{
            chef++;
            M++;
        }
    }
    if(chef > M){
        cout<<0<< " "<<chef<<endl;
    }else if(chef < M){
        cout<<1<< " "<<M<<endl;
    }else{
        cout<<2<< " " <<chef<<endl;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<string,string>> ar;
        for(int i=0;i<n;i++){
            pair<string,string> temp;
            string a,b;
            cin>>a>>b;
            temp.first = a;
            temp.second = b;
            ar.pb(temp);
        }
        getans(ar,n);
    }
    return 0;
}