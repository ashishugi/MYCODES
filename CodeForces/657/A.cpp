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
void substring(string s,int len){
    string pattern = "abacaba";
    int count= 0;
    for(int i=0;i<len;i++){
        int j=0;
        for(;j<pattern.length() && (i+j < len );j++){
            if(pattern[j] != s[i+j]){
                break;
            }
        }
        if(j == pattern.length()){
            count++;
        }
    }
    if(count == 1 ){
        for(int i=0;i<len;i++){
            if(s[i]=='?'){
                s[i]='z';
            }
        }
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }else if(count > 1){
        cout<<"No"<<endl;
    }else{
            // first filling all the question marks .
            bool flag = false;
        for(int i=0;(i< len);i++){
            int j=0;
            vector<int> index;
            for(;j<pattern.length()&& (i+j < len );j++){
                if(s[i+j] == '?'){
                    s[i+j] = pattern[j];
                    index.push_back(i+j);
                }else if(pattern[j] != s[i+j]){
                    break;
                }
            }
            int innerCount =0;
            for(int p=0;p<len;p++){
                int q=0;
                for(;q<pattern.length() && (p+q < len );q++){
                    if(pattern[q] != s[p+q]){
                        break;
                    }
                }
                if(q == pattern.length()){
                    innerCount++;
                }
            }
            if(innerCount == 1){
                flag= true;
                break;
            }else{
                for(auto x : index){
                    s[x] = '?';
                }
            }
        }
        if(flag){
            for(int i=0;i<len;i++){
                if(s[i] == '?'){
                    s[i] = 'z';
                }
            }
            cout<<"Yes"<<endl;
            cout<<s<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
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
        substring(s,n);
    }
    return 0;
}