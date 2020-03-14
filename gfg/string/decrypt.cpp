#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
char getkth(string s,int k){
    string temp;
    int n=s.length();
    string final_string="";
    for(int i=0;i<n;){
        if(s[i]>=97 && s[i]<=122){
            temp+=s[i];
            i++;
        }
        else{
            int num=0;
            while((i<n)&&((s[i])>=48 && (s[i])<=57)){
                i++;
                num++;
            }
            int index=i-1;
            int y=1;
            int count=0;
            while(num--){
                int sum = 0;
                sum = (s[index]-'0')*y;
                count=count+sum;
                index--;
                y=y*10;               
            }
            while(count--){
                final_string+=temp;
            }
            temp="";
        }
    }
    cout<<"the final string after the decryption is "<<final_string<<endl;
    return final_string[k-1];
}
int main(void){
    string s;
    cin>>s;
    int k;
    cin>>k;
    char ch = getkth(s,k);
    cout<<ch<<endl;
  return 0;
}