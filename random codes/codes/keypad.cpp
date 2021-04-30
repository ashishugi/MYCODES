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
vector<string> res;
void stringCount(string x,map<int,char> &mp,string output){
    if(x.length() == 1 || x.length() == 0){
        if(x.length()  == 1){
            output = output+mp[x[0]-'0'];
            res.push_back(output);
        }else if(output.length() >0){
            res.push_back(output);
        }
        return;
    }
    stringCount(x.substr(1),mp,output+mp[x[0]-'0']);
    if(x.length()>1 && ((x[0]-'0')*10 + (x[1]-'0') )<=26 ){
        char value = mp[((x[0]-'0')*10 + (x[1]-'0'))];
        stringCount(x.substr(2),mp,output+value);
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string number;
    cin>>number;
    map<int,char> mp;
    char ch='a';
    for(int i=1;i<=26;i++){
        mp[i] = ch;
        ch++;
    }
    stringCount(number,mp,"");
    for(auto x : res){
        cout<<x<< "\n";
    }
    return 0;
}