#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getlen(string s,int len){
    int count =0;
    int open =0;
    int close =0;
    for(int i=0;i<len;i++){
        if(s[i]=='('){
            open++;
        }else if(s[i]==')'){
            close++;
        }
        if(open==0 && close > 0){
            count++;
            close=0;
        }else if(open > 0 && close>0){
            open--;
            close--;
        }
    }
    return ((count+open)/2);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int len ;
        cin>>len;
        string s;
        cin>>s;
        int ans = getlen(s,len);
        cout<<ans<<endl;
    }
    return 0;
}