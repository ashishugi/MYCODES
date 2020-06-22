#include<bits/stdc++.h>
using namespace std;
int f1[257];
    bool check(int f2[257]){
       for(int i=0;i<257;i++){
           if(f1[i] != f2[i]){
               return false;
           }
       }
        return true;
    }
    bool permutation(string s1, string s2) {
        int l1 = s1.length();
        int l2 = s2.length();
        if(l1 > l2){
            return false;
        }
        int f2[257];
        memset(f2,0,sizeof(f2));
        memset(f1,0,sizeof(f1));
        for(int i=0;i<l1;i++){
           f1[s1[i]]++;
           f2[s2[i]]++;
        }
        
        for(int i=l1;i<l2;i++){
            if(check(f2)){
                return true;
            }
            f2[s2[i]]++;
            f2[s2[i - l1]]--;
        }
        if(check(f2)){
            return true;
        }
        return false;
    }
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1 = "abc";
    string s2 = "sdfbbbsbcbajh";
    cout<<permutation(s1,s2)<<endl;
    return 0;
}