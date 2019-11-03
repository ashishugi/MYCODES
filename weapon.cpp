#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        string input[n];
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        string out =input[0];
        for(int i=1;i<n-1;i++){
            for(int j=0;j<input[i].length();j++){
                out = (out[j] ^ input[i][j]);
            }
        } // end of for 
        int count =0;
            for(int i=0;i<out.length();i++){
                if(out[i]=='1'){
                    count++;
                }
            }
            cout<<count<<endl;
    } // end of while
}