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
int getRes(ll* ar,int n){
    int index = -1;
    for(int i=1;i<n;i++){
        if(ar[i-1] < ar[i]){
            index = i;
        }
    }
    return index;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll* ar = new ll[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        bool flag = true;
        for(int i=1;i<n;i++){
            if(ar[i] != ar[i-1]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<(-1)<<endl;
        }else{
            int index = 0;
            int maximum = *max_element(ar,ar+n);
            for(int i=0;i<n;i++){
                if(ar[i] == maximum){
                    index = i;
                }
            }
            bool flag2= false;
            for(int i=0;i<n-1;i++){
                if(maximum == ar[i] && ar[i+1] < maximum){
                    index = i;
                    break;
                }
            }
            for(int i=1;i<n;i++){
                  if(maximum == ar[i] && ar[i-1] < maximum){
                    index = i;
                    break;
                }
            }
            cout<<(index+1)<<endl;
        }
    }
    return 0;
}