#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
string getans(int* ar,int n){
    unordered_map<int,int> um ; // int->value , int->freq;
    um[5] = 0;
    um[10] = 0;
    um[15] = 0;
    for(int i=0;i<n;i++){
        int req = ar[i]-5;// to be given back to the customer
        um[ar[i]]++;
        if(req == 0){
            continue;
        }
        else if(req == 5 && um[5]>=1){
            um[5]--;
        }else if(req == 10 ){
           if(um[10]>=1){
               um[10]-=1;
           }else if(um[5]>=2){
               um[5]-=2;
           }else{
               return "NO";
           }
        }else{
            return "NO";
        }
    }
    return "YES";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* ar = new int[n];
        loop(i,0,n){
            cin>>ar[i];
        }
        string ans  = getans(ar,n);
        cout<<ans<<endl;
    }
    return 0;
}