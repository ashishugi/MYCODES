#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        string s;
        char ch;
        cin>>s;
        cin>>ch;
        vector<int> coll;
        int len = s.length();
        for(int i=0;i<len;i++){
            if(s[i] == ch){
                coll.push_back(i);
            }
        }
        vector<int> res;
        for(int i=0;i<len;i++){
            int val = INT_MAX;
            if(s[i]!=ch){
                for(int j=0;j<coll.size();j++){
                    if(val > abs(i - coll[j])){
                        val = abs(i-coll[j]);
                    }
                }
                res.push_back(val);
            }else{
                res.push_back(0);
            }
        }
        for(auto x : res){
            cout<<x<< " ";
        }
        cout<<"\n";
    }
  return 0;
}