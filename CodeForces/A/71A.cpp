#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int len = s.length();
        if(len<=10){
            cout<<s<<endl;
        }else{
            cout<<s[0]<<(len-2)<<s[len-1]<<endl;
        }
    }
    return 0;
}