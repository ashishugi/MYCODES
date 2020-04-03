#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
bool is_possible(int x,int y,int a,int b){
    if(x==a && y==b){
        return true;
    }
    if(x>a || y>b){
        return false;
    }
    bool ans = false;
    ans = (is_possible(x+y,y,a,b) || is_possible(x,y+x,a,b));
    return ans;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        cout<<is_possible(x,y,a,b)<<endl;
    }
  return 0;
}