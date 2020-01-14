#include<bits/stdc++.h>
using namespace std;
int countPalindromeSubstrings(string s){
    int final_count =0 ;
    int n= s.length();
    for(int i=0;i<n;i++){
        int l=i;
        int r=i;
        while(l>=0 && r<n && s[l]==s[r]){
          //  cout<<" 1 : "<<(s.substr(l, (r-l)+1))<<endl;
            l--;
            r++;
            final_count++;
        }
        l=i;
        r=i+1;
        while(l>=0 && r<n && s[l]==s[r]){
          //  cout<<" 2 : "<<(s.substr(l, (r-l)+1))<<endl;
            l--;
            r++;
            final_count++;
        }
    }
    return final_count;
}
int main(void){
    string s;
    cin>>s;
    int count = countPalindromeSubstrings(s);
    cout<<count<<endl;
}