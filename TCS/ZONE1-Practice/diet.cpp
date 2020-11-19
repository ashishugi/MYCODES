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
struct Item{
    int p;
    int c;
    int f;
};
Item minValues;
Item minimum_ans;
int minvalue = INT_MAX;
int CharTOInteger(string s){
    int value=0;
    int y=1;
    for(int i=s.length()-1;i>=0;i--){
        int a = s[i]-'0';
        value+=y*a;
        y=y*10;
    }
    return value;
}
void getRecursive(vector<Item>& ar,int index,Item required,int size){
    if(required.p < minValues.p || required.c<minValues.c || required.f < minValues.f){
        int value = required.p+required.c+required.f;
        if(value < minvalue){
            minimum_ans = required;
        }
        return;
    }
    if(index>=size){
        return;
    }
    getRecursive(ar,(index+1),required,size);
    if(required.p >= ar[index].p && required.c >= ar[index].c && required.f >= ar[index].f){
        required.p -= ar[index].p;
        required.c -= ar[index].c;
        required.f -= ar[index].f;
        getRecursive(ar,(index+1)%size,required,size);
    }
}
void Calculate(vector<Item>& ar,Item required){
    getRecursive(ar,0,required,ar.size());
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input="";
    getline(cin,input);
    string power="";
    getline(cin,power);
    Item required;
    string temp="";
    for(int i=0;i<input.length();i++){
        if(input[i]>='0' && input[i]<='9'){
            temp+=input[i];
        }else if(input[i] == ' '){
            continue;
        }else{
            int value = CharTOInteger(temp);
            if(input[i]=='P'){
                required.p = value;
            }else if(input[i]=='C'){
                required.c = value;
            }else{
                required.f = value;
            }
            temp="";
        }
    }
    cout<<endl;
    vector<Item> ar;
    temp="";
    Item values;
    for(int i=0;i<power.length();i++){
        if(power[i]>='0' && power[i]<='9'){
            temp+=power[i];
        }else if(power[i]=='|'){
            temp="";
            ar.pb(values);
        }else if(power[i] == ' '){
            continue;
        }else {
            int value = CharTOInteger(temp);
            if(input[i]=='P'){
                values.p = value;
            }else if(input[i]=='C'){
                values.c = value;
            }else{
                values.f = value;
            }
            temp="";
        }
    }

    for(auto x : ar){
        if(minValues.p > x.p){
            minValues.p = x.p;
        }
        if(minValues.c > x.c){
            minValues.c = x.c;
        }
        if(minValues.f > x.f){
            minValues.f = x.f;
        }
    }
    ar.pb(values);
    Calculate(ar,required);
    cout<<minimum_ans.p<< " "<<minimum_ans.c<< " "<<minimum_ans.f<<endl;
    return 0;
}