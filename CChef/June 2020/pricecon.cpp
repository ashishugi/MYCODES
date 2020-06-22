#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
typedef long long ll;
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        ll sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp > k){
                sum+=temp-k;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}