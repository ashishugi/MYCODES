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
int get(int** ar,int row,int col,int countNegative){
    int res =0;
    if(countNegative%2 ==0){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res+=abs(ar[i][j]);
            }
        }
    }else{
        int minimum = INT_MAX;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res+=abs(ar[i][j]);
                if(minimum > abs(ar[i][j])){
                    minimum = abs(ar[i][j]);
                }
            }
        }
        res = res - 2*minimum;
    }
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int** ar = new int*[n];
        int countNegative =0;
        for(int i=0;i<n;i++){
            ar[i] = new int[m];
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
                if(ar[i][j] < 0){
                    countNegative++;
                }
            }
        }
        int res = get(ar,n,m,countNegative);
        cout<<res<<endl;
    }
    return 0;
}