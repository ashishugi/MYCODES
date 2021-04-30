#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    string str1 , str2;
    cin>>str1;
    cin>>str2;
    long long count=0;
    for(int i=0;i<n;){
       if(str1[i]!=str2[i]){
           if(i+1<n && (str1[i]!=str1[i+1] && str1[i+1]!=str2[i+1])){
              
               i=i+2;
           }
           else{
               //count++;
                i++;
           }
            count++;
       }

        else{
          i++;
           // cout<<"inside the else{}"<<endl;
        }
    }
    cout<<count<<endl;
}