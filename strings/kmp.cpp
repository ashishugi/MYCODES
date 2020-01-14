#include<bits/stdc++.h>
using namespace std;
int* lpsfunc(string p){
    int i=1;
    int j=0;
    int* lps = new int[p.length()];
    lps[0]=0;
    while(i<p.length()){
        if(p[j] == p[i]){
            lps[i]= j+1;
            i++;
            j++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}
bool kmp(string s,string p){
    int* lps = new int[p.length()];
    lps = lpsfunc(p);
    int i=0;
    int j=0;
    while((i < s.length()) && (j<p.length())){
        if(s[i] == p[j]){
            i++;
            j++;
        }else{
            if(j!=0){
                j=lps[i-1];
            }else{
                i++;
            }
        }
    }
    if(j==p.length()){
        return true;
    }else{
        return false;
    }

}
int main(void){
    string s,p;
    cin>>s;
    cin>>p;
    cout<<kmp(s,p)<< endl;
}