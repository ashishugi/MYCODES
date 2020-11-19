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
int countMin(string str,int c0,int c1,int h){
    int countZero=0,countOne=0;
    int len = str.length();
    for(int i=0;i<len;i++){
        if(str[i] == '0'){
            countZero++;
        }else{
            countOne++;
        }
    }
    int ans1 = countZero*c0+countOne*c1;
    // now converting zero;
    int ans2=0;
    ans2+=countOne*h;
    ans2+=len*c0;
    // now converting to One;
    int ans3 = 0;
    ans3+=countZero*h;
    ans3+=len*c1;
    return min(ans1,min(ans2,ans3));
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string str;
        cin>>str;
        int res = countMin(str,c0,c1,h);
        cout<<res<<endl;
    }
    return 0;
}