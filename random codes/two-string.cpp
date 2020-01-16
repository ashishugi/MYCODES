#include<bits/stdc++.h>
using namespace std;
int main(void){
    int countab=0,countba=0;
    string str1;
    cin >> str1;
    int flag=0;
    if(str1.length()< 4){
        cout<<"NO"<<endl;
        flag=1;
    }
    else
    {
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]=='A')
            {
                    i++;
                if(str1[i]=='B')
                {
                    countab++;
                    i++;
                }

            }
            if(str1[i]=='B')
            {
                    i++;
              if(str1[i]=='A')
              {
                    countba++;
                    i++;
              }
            }
            if(str1[i]=='A' || str1[i]=='B'){
                i--;
            }
        }
    }  // end of else
    if(countab>0 && countba>0){
        cout<<"YES"<<endl;
    }
    else if(flag!=1){
        cout<<countab<<" "<<countba<<endl;
        cout<<"NO"<<endl;
    }
}