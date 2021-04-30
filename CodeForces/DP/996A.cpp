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
    ll n;
    cin>>n;
    ll count=0;
    int ar[] = {1,5,10,20,100};
    for(int i=4;i>=0;i--){
        int value = ar[i];
        while(n >= value){
            n -= value;
            count++;
        }
    }
    cout<<(count)<<endl;
    return 0;
}