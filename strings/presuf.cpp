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
void kmp(string s,string p){
    int* lps = new int[p.length()];
    lps = lpsfunc(p);
    for(int i=0;i<p.length();i++){
        cout<<lps[i]<< " ";
    }
    cout<<endl;
}
int main(void){
    string s,p;
    cin>>s;
    cin>>p;
    kmp(s,p);
}