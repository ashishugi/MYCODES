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
void maize(int**  m, int size,int i ,int j,string output , vector<string>& res,bool ** visited){
    cout<<i<< " "<<j<<" next "; 
    if(size-1 == i && size-1 == j){
        res.push_back(output);
        return;
    }
    if(i>=size || i<0 || j>=size || j<0 || m[i][j] == 0){
        return;
    }
    visited[i][j] = true;
    maize(m,size,i-1,j,output+'U',res,visited); // top
    maize(m,size,i,j+1,output+'R',res,visited); // right
    maize(m,size,i+1,j,output+'B',res,visited);// bottom
    maize(m,size,i,j-1,output+'L',res,visited); // left
    visited[i][j] = false;
}
vector<string> printPath(int** m, int n) {
    // Your code goes here
    vector<string> res;
    bool** visited = new bool*[n];
    for(int i=0;i<n;i++){
        visited[i] = new bool[n];
        for(int j=0;j<n;j++){
            visited[i][j]  = false;
        }
    }
    maize(m,n,0,0,"",res,visited);
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m;
    int n;
    cin>>m>>n;
    int** ar = new int*[m];
    for(int i=0;i<m;i++){
        ar[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
    vector<string> res = printPath(ar,m);
    for(auto x : res){
        cout<<x<< " ";
    }
    cout<<endl;
    return 0;   
}