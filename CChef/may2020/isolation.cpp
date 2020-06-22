#include<unordered_map>
#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
typedef long long ll;
using namespace std;
int getsize(unordered_map<char,int> freq,int center){
    int count =0;
    for(auto x : freq){
        if(x.second > center){
            count+=abs(x.second - center);
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        unordered_map<char ,int> freq;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        while(q--){
            ll center;
            cin>>center;
            int ans = getsize(freq, center);
            cout<<ans<<endl;
        }

    }
    return 0;
}