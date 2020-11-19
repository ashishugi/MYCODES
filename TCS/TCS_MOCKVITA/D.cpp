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
#define pop pop_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int minDiff = INT_MAX;
int res = INT_MAX;
void getMin(int sum1 ,int sum2 , int* ar ,int n ){
    if( n == 0){
        int diff = abs(sum1 - sum2);
        if(diff < minDiff){
            minDiff =  diff;
            res = max(sum1,sum2);
        }
        return;
    }
    getMin(sum1+ar[0] , sum2,ar+1,n-1);
    getMin(sum1,sum2+ar[0],ar+1,n-1);
}
void convertToInteger(vector<string>& input,int len,int* ar){
    for(int i=0;i<len;i++){
        string s = input[i];
        int y=1;
        int sum = 0;
        for(int j=s.length()-1;j>=0;j--){
            sum+= y*(s[j]-'0');
            y = y*10;
        }
        ar[i] = sum;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin,s);
    vector<string> input;
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            input.push_back(temp);
            temp="";
        }else{
            temp+=s[i];
        }
    }
    input.push_back(temp);
    int len  =input.size();
    int* ar =new int[len];
    convertToInteger(input,len,ar);
    getMin(0,0,ar,len);
    cout<<res<<endl;
    return 0;
}