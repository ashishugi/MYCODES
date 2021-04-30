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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int d;
    cin>>n>>d;
    string ar;
    cin>>ar;
    bool flag = false;
    int count=0;
    for(int i=0;i<ar.length();){
        int index=-1;
        if(i == n-1){
            break;
        }
        for(int j = i+1;j<n && j<=(i+d);j++){
            if(ar[j] == '1'){
                index=j;
            }
        }
        if(index==-1){
            flag = true;
            break;
        }else{
            count++;
            i = index;
        }
    }
    if(flag){
        cout<<-1<<endl;
    }else{
        cout<<count<<endl;
    }
    return 0;
}