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
int Digit(int x){
    int count =0;
    while(x){
        count++;
        x = x/10;
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int single = x%10;
        int res = 10*(single-1);
        int countDigit = Digit(x);
        res+= (countDigit*(countDigit+1))/2;
        cout<<res<<endl;
    }
    return 0;
}