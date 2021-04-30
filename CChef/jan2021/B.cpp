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
string getAns(string s){
    string output="";
    char charArray[16];
    char ch='a';
    for(int i=0;i<16;i++){
        charArray[i]=ch;
        ch++;
    }
    for(int i=0;i<s.length();i+=4){
        int number = stoi(s.substr(i,4),nullptr,2);
        output+=charArray[number];
    }
    return output;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res = getAns(s);
        cout<<res<<endl;
    }
    return 0;
}