#include<bits/stdc++.h>
using namespace std;
int getnum(string s){
    vector<int> res;
    for(int i=0;i<s.length();i++){
        res.push_back((s[i]-'0'));
    }
    int sum =0 ;
    reverse(res.begin(),res.end());
    int y=1;
    for(int i=0;i<res.size();i++){
        int sumy = y*res[i];
        sum+=sumy;
        y=y*10;
    }
    return sum;
}
bool check(int val ,vector<int>& num){
    for(int i=0;i<num.size();i++){
       for(int j=0;j<num.size();j++){
           if(i!=j){
               if(num[i]*num[j] == val){
                   cout<<num[i]<< " "<<num[j]<<endl;
                   return true;
               }
           }
       }
    }
    return false;
}
vector<int> getans(string s){
    int len  = s.length();
    vector<int> num,res ;
    unordered_set<int> us;
    for(char c  :s){
        num.push_back((c-'0'));
    }
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            string temp = s.substr(i,(j-i)+1);
           // cout<<temp<<endl;
            int var = getnum(temp);
            if(check(var,num)){
                us.insert(var);
            }
        }
    }
   for(auto x : us){
       if(x!=0){
           res.push_back(x);
       }
   }
   sort(res.begin(),res.end());
    return res;
}
int main(void){
    string s;
    cin>>s;
    vector<int> ans = getans(s);
    if(ans.size() == 0){
        cout<<(-1)<<endl;
    }else{
        for(int x : ans){
            cout<<x<< " ";
        }
        cout<<endl;
    }
    return 0;
}