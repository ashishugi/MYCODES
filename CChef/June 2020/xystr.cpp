#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count =0;
        for(int i=1;i<s.length();){
            if((s[i-1]=='x' && s[i]=='y')||(s[i]=='x' && s[i-1]=='y')){
                count++;
                i+=2;
            }else{
                i++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}