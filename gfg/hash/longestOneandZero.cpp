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
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int maximum =0;
    for(int i=0;i<n;i++){
        int one =0;
        int zero =0;
        for(int j=i;j<n;j++){
            if(ar[j] == 1){
                one++;
            }else{
                zero++;
            }
            if(zero == one){
                maximum = max(maximum , one+zero);
            }
        }
    }
    cout<<maximum<<endl;
    return 0;
}