#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
string getres(string s){
    int size = s.length();
    for(int i=0;i<size;i++){
        if(s[i]==' '){
            continue;
        }else if(i-1 >=0 && (s[i-1] == ' '))
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    string res = getres(s);
    cout<<res<<endl;
    return 0;
}