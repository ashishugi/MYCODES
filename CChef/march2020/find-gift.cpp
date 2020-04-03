#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x =0 ,y=0;
        int len = s.length();
        for(int i=0;i<len;){
            if(s[i] == 'L'){
                x-=1;
                while(i<len && (s[i]=='L' || s[i]== 'R')){
                    i++;
                }
            }
            else if(s[i] == 'U'){
                y+=1;
                while(i<len && (s[i]=='U' || s[i]=='D')){
                    i++;
                }
            }
            else if(s[i]=='R'){
                x+=1;
                while(i<len && (s[i]=='R' || s[i]=='L')){
                    i++;
                }
            }
            else{
                y-=1;
                while(i<len && (s[i]=='D' || s[i]=='U')){
                    i++;
                }
            }
        }
         cout<<x<< " "<<y<<endl;
    }
  return 0;
}