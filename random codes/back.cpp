#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
bool backspaceCompare(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        int count=0;
        for(int i=len1-1;i>=0;i--){
            if(s[i]=='#'){
                s[i]='0';
               count++;
            }
            else{
                if(count!=0){
                    s[i]='0';
                    count--;
                }
            }
            
        }
        count=0;
        for(int i=len2-1;i>=0;i--){
            if(t[i]=='#'){
                t[i]='0';
               count++;
            }
            else{
                if(count!=0){
                    t[i]='0';
                    count--;
                }
            }
        }
        int i=0,j=0;
        for(;(i<len1 && j<len2);){
            if(s[i]!='0' && t[j]!='0'){
                if(s[i]!=t[j]){
                    return false;
                }
                i++,j++;
            }else if(s[i]=='0'){
                i++;
            }else if(t[j]=='0'){
                j++;
            }else{
                i++,j++;
            }
        }
        while(i<len1){
             if(s[i]!='0' && t[j]!='0'){
                if(s[i]!=t[j]){
                    return false;
                }
                 i++,j++;
            }
            else if(s[i]=='0'){
                i++;
            }else if(t[j]=='0'){
                j++;
            }else{
                i++,j++;
            }
        }
         while(j<len2){
             if(s[i]!='0' && t[j]!='0'){
                if(s[i]!=t[j]){
                    return false;
                }
                 i++,j++;
            }
            else if(s[i]=='0'){
                i++;
            }else if(t[j]=='0'){
                j++;
            }else{
                i++,j++;
            }
        }
        cout<<s<< " and "<<t;
        return true;
    }
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,t;
    cin>>s>>t;
    cout<<backspaceCompare(s,t)<<endl;
    return 0;
}