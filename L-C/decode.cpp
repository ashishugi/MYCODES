#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int decode(string s){
    if(s.length() == 0){
        return 0;
    }
    if(s.length() ==1){
        return 1;
    }
    int ans = decode(s.substr(1));
    if(((s[0]-'0')*10 + (s[1]-'0')) <= 26 ){
        ans+=decode(s.substr(2));
    }
    return ans;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    cout<<decode(s)<<endl;
    return 0;
}