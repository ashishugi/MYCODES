#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
unordered_map<string,int> number;
bool check(string p,string time){
    int start =0;
    int end =0;
    string temp = to_string(time[0]+time[1]);
    start = stoi(temp);
    start = start*100;
    temp = time[6]+time[7];
    if(temp == "PM"){
        start+=1200;
    }
    temp = to_string(time[3]+time[4]);
    // start += atoi(temp);
    stringstream geek(temp);
    start += geek >> start; 
    cout<<start<<endl;
    temp = time[9]+time[10];
    end = stoi(temp);
    end = end*100;
    temp = time[15]+time[16];
    if(temp == "PM"){
        end+=1200;
    }
    temp = time[12]+time[13];
    end += stoi(temp);
    cout<<end<<endl;
    return true;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    number["00"] = 0;
    number["01"] = 1;
    number["02"] = 2;
    number["03"] = 3;
    number["04"] = 4;
    number["05"] = 5;
    number["06"] = 6;
    number["07"] = 7;
    number["08"] = 8;
    number["09"] = 9;
    number["10"] = 10;
    number["11"] = 11;
    number["12"] = 12;
    int t;
    cin>>t;
    while(t--){
        string p;
        getline(cin,p);
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            string time="";
            getline(cin,time);
            if(check(p,time)){
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}