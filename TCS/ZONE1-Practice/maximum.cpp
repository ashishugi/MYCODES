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
int getmax(vector<int>& ar,int n){
    int res =0 ;
    while(ar.size()>1){
        int index =0;
        int value=0;
        int minvalue = INT_MAX;
        for(int i=0;i<ar.size();i++){
           int tempvalue = 0;
           if(i==0){
               tempvalue = ar[i]*ar[i+1];
           }else if(i==ar.size()-1){
               tempvalue = ar[i-1]*ar[i];
           }else{
               tempvalue = ar[i]*max(ar[i-1],ar[i+1]) + min(ar[i-1],ar[i+1]);
           }
           if(value < tempvalue){
               if(value == tempvalue){
                    value = tempvalue;
                    index = min(ar[index],ar[i]);
               }else{
                   value = tempvalue;
                   index = i;
               }
           }
        }
        res += value;
        ar.erase(ar.begin()+index);
    }
    res+=ar[0];
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> ar(n,0);
    loop(i,0,n){
        cin>>ar[i];
    }
    int res = getmax(ar,n);
    cout<<res<<endl;
    return 0;
}