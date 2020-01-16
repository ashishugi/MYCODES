#include<bits/stdc++.h> 
using namespace std;
int *getlps(string pattern) {
    int len = pattern.length();
    int *lps = new int[len]; 
    lps[0]=0; 
    int i=1;
    int j=0;
    while(i<len) {
        if(pattern[i]==pattern[j]) {
            lps[i] = j+1; i++; j++;
        } else 
        {
            if(j!=0) {
                j=lps[j-1];
            } else {
                lps[i]=0;
                i++; 
            } 
        }
    } 
    return lps;
}
int findString(string S, string T) {
    int slen = S.length();
    int tlen = T.length();
    int *lps = getlps(T); 
    int i=0; int j=0; 
    while(i<slen) {
        if(S[i]==T[j]) {
            i++; j++;
        } if(j==tlen) {
            return (i-j);
        } else if(S[i]!=T[j]) {
            if(j!=0) {
                j=lps[j-1];
            } else { i++; 
                   }
         } 
    } 
    return -1;
} 
int main() {
    char S[1000], T[1000];
    cin.getline(S, 1000);
    cin.getline(T, 1000);
    cout << findString(S, T) << endl;
}
