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
void permutation(string s,string output){
    if(s.length() == 0){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        string ans1 = s.substr(0,i);
        string ans2 = s.substr(i+1);
        string newString  = ans1+ans2;
        permutation(newString,output+s[i]);
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    permutation(s,"");
    return 0;
}