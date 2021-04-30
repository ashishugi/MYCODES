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
        return ;
    }
    permutation(s.substr(1),output);
    string newString = output+s[0];
    if(newString.find("ab") == string::npos){ // if the string do not contains "ab" substring .
        permutation(s.substr(1),output+s[0]);
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    permutation(s,"");
    cout<<s<< " ";
    (next_permutation(s.begin(),s.end()));
    cout<<"  :  "<<s<<endl;
    

    return 0;
}