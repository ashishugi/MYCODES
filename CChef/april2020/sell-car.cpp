#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
#define m 1000000007
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> ar;
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            ar.push_back(temp);
        }
        sort(ar.begin() ,ar.end(),greater<ll>());
        int maxvalue =0;
        for(int i=0;i<ar.size();i++){
            if(ar[i]-i>=0){
                maxvalue = (maxvalue%m + (ar[i] - i)%m)%m;
            }
        }
        cout<<maxvalue<<endl;
    }
  return 0;
}