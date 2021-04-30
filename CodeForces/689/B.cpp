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
bool check(char** ar,int row,int col,int x, int y,int height){
    // check col ;
    int tempi = x;
    int tempj = y;
    int temph = height;
    for(int i=tempi;i<row && i>=0 && i<(tempi+height-1);i++){
        cout<<"here 1 : "<<i<< " ";
        if(ar[i][y] != '*'){
            return false;
        }
    }
    cout<<endl;
    int temprow = x+height-1;
    int tempcol = y-height+1;
    for(int i = tempcol;i<col && i>=0  && i<(2*height+1);i++){
        cout<<"here 2: "<<i<< " ";
        if(ar[temprow][i] !='*'){
            return false;
        }
    }
    return true;
}
int getCount(char** ar,int row,int col){
    int count =0;
    for(int x =0;x<row;x++){
        for(int y=0;y<col;y++){
           if(ar[x][y] == '*'){
               count++;
               for(int k=2;k<min(row,col);k++){
                   if(check(ar,row,col,x,y,k)){
                       count++;
                   }
               }
           }
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        char ** ar = new char*[n];
        for(int i=0;i<n;i++){
            ar[i] = new char[m];
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
        int res = getCount(ar,n,m);
        cout<<res<<endl;
    }
    return 0;
}