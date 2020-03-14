#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getsub(string s){
    int count=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
    }
    return count;
}
int main(void){
    string s;
    cin>>s;
    int answer = getsub(s);
    cout<<answer<<endl;
  return 0;
}