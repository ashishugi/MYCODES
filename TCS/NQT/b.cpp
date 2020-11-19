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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string parent;
    cin>>parent;
    char ch;
    cin>>ch;
    if(ch == 'Y'){
        string s="";
        cin>>s;
        vector<string> ar;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i] != ','){
                temp+=s[i];
            }else if(s[i] == ','){
                ar.push_back(temp);
                // cout<< " - >" <<ar.size()<<endl;
                temp="";
            }
        }
        ar.push_back(temp);
        cout<<"TOTAL MEMBERS:"<<ar.size()<<endl;
        cout<<"COMMISSION DETAILS"<<endl;
        cout<<parent<<":"<<((ar.size()*5000)*0.10)<< " INR"<<endl;
        for(auto x : ar){
            cout<<x<<":"<<(((ar.size()*5000)*0.05))<<" INR"<<endl;
        }
    }else{
        cout<<"TOTAL MEMBERS:0"<<endl;
        cout<<"COMMISSION DETAILS"<<endl;
        cout<<parent<<":"<<((5000)*0.05)<< " INR"<<endl;
    }
    return 0;
}