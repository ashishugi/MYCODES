#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
int main(void){
   
    vector<pair<string,int>> ar(13);
    ar[0].first = "MH04CC2";
    ar[0].second = 1;
    ar[1].first = "MH04C2820";
    ar[1].second = 2;
    ar[2].first = "MH04BB3232";
    ar[2].second = 3;
    ar[3].first = "MH04CC2113";
    ar[3].second = 4;
    ar[4].first = "MH04CC2878";
    ar[4].second = 5;
    ar[5].first = "MH04BB8";
    ar[5].second = 6;
    ar[6].first = "MH04CC2888";
    ar[6].second = 7;
    ar[7].first = "MH04CC1313";
    ar[7].second = 8;
    ar[8].first = "MH04CC2222";
    ar[8].second = 9;
    ar[9].first = "MH04C1201";
    ar[9].second = 10;
    ar[10].first = "MH04CC555";
    ar[10].second = 11;
    ar[11].first = "MH04C6565";
    ar[11].second = 12;
    ar[12].first = "MH04A7";
    ar[12].second = 13;
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n!=1 && n!=2){
        cout<<"INVALID INPUT"<<endl;
    }else if(n==2){
        bool flag = true;
        for(int i=0;i<13;i++){
            if(s==ar[i].first){
                cout<<"CAR POSITION:"<<ar[i].second<<endl;
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"CAR DOES NOT EXISTS"<<endl;
        }
    }else{

        cout<<"CAR PARKED AT POSITION:"<<14<<endl;
    }
    return 0;
}