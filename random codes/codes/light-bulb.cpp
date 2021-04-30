#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    int n;
    cin>>n;
    ll x, y;
    cin>>x>>y;
    string str;
    cin>>str;
    ll len = str.length();
    ll count_groups = 0;
    if(str[0] =='0'){
        count_groups++;
    }
    for(int i=1;i<len;i++){
        if(str[i] == '0' && str[i-1]=='1'){
            count_groups++;
        }
    }
    ll result = (count_groups-1)*min(x,y)+y;
    if(count_groups ==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<result<<endl;
    }
}