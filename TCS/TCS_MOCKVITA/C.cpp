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
int get(int minlen,int maxlen,int minwidth,int maxwidth){
    int count =0;
    for(int i=minlen;i<=maxlen;i++){
        bool flag=true;
        for(int j=minwidth;j<=maxwidth;j++){
            int row = max(i,j),col = min(i,j);
            while(row>0 && col>0){
                if(row == col){
                    count++;
                    flag=false;
                    break;
                }else{
                    row = row - col;
                    int temp = max(row,col);
                    col = min(row,col);
                    row = temp;
                }
              count++;
            }
           if(flag){
            count+=max(row,col);
           }
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int minlen =0 ,maxlen = 0,minwidth =0 ,maxwidth =0;
    cin>>minlen>>maxlen>>minwidth>>maxwidth;
    int ans = get(minlen,maxlen,minwidth,maxwidth);
    cout<<ans<<endl;
    return 0;
}