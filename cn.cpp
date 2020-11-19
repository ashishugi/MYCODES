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
#define pop pop_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getoutput(unordered_map<string,bool> res,string output[],map<char,set<char>> mp,int n,string s){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(output[j].length() <= i){
                continue;
            }else if(res[output[j]] != false){
                char check = output[j][i];
                char value = s[i];
                set<char> st = mp[value];
                if(st.find(check)==st.end()){
                    res[output[j]] = false;
                    continue;
                }
            }
        }
    }
    int count =0;
    for(auto x : res){
        if(x.second == true){

            count++;
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len = s.length();
    unordered_map<string,bool>  res;
    string output[n];
    for(int i=0;i<len;i++){
        cin>>output[i];
        res[output[i]] = true;
    }
    map<char,set<char>> mp;
    mp['2'] ={'a','b','c'};
    mp['3'] ={'d','e','f'};
    mp['4'] ={'g','h','i'};
    mp['5'] ={'j','k','l'};
    mp['6'] ={'m','n','o'};
    mp['7'] ={'p','q','r','s'};
    mp['8'] ={t','u','v'};
    mp['9'] ={'w','x','y','z'}; 
    int ans = getoutput(res,output,mp,n,s);
    cout<<ans<<endl;
    return 0;
}