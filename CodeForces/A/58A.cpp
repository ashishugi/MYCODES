#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "hello";
    string p;
    cin>>p;
    int i=0;
    int j=0;
    int len1 = s.length();
    int len2  = p.length();
    while(i<len1 && j<len2){
        if(s[i] == p[j]){
            i++;
        }
        j++;
    }
    if(i==len1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}