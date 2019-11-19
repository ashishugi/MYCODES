#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int start[n+5];
    memset(start , 0,sizeof(start));
    int end[n+5];
    memset(end , 0, sizeof(end));
    for(int i=1;i<=m;i++){
       int st;
        int e;
        cin>>st>>e;
        start[st]++;
        end[e]++;
    }
    int q;
    int res[n+5];
    memset(res , 0 ,sizeof(res));
    res[1] = start[1];
    for(int i=2;i<=n;i++){
        res[i] =  start[i] - end[i-1] + res[i-1];
    }
    int final_res[n+5];
    memset(final_res ,0,sizeof(final_res));
    // for(int i=1;i<=n;i++){
    //     cout<<res[i]<< " ";
    // }
    for(int i=1;i<=n;i++){
        final_res[res[i]]++;
    }
    cin>>q;
    int num_atleast[n+5];
    num_atleast[n] = final_res[n];
    for(int i=n-1;i>=0;--i){
        num_atleast[i] =num_atleast[i+1]+final_res[i];
    }
    while(q--){
        int x;
        cin>>x;  
        cout<<num_atleast[x]<<endl;
    }
    return 0;
}
