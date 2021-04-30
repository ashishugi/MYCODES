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
int getAns(int x){
    int count=0;
    int i=1;
    int value=0;
    while(value < x){
        value +=i;
        i++;
        count++;
    }
    if(value == x){
        return count;
    }else if(x+1 == value){
        return (count+1);
    }else {
        return count;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int res = getAns(x);
        cout<<res<<endl;
    }
    return 0;
}