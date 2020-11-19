#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int one =0;
    int zero=0;
    bool flag=false;
    for(int i=0;i<s.length();i++){
        if(s[i] == '0'){
            zero++;
            one =0;
        }else if(s[i]=='1'){
            one++;
            zero=0;
        }
        if(one>=7 || zero>=7){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}