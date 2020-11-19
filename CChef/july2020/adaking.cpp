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
void show(int n){
    char** mat =  new char*[8];
    for(int i=0;i<8;i++){
        mat[i] = new char[8];
        for(int j=0;j<8;j++){
            mat[i][j]='X';
        }
    }
    mat[0][0]='O';
    bool flag = false;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
             if(n<=0){
                flag=true;
                break;
            }
            if(n>0){
                mat[i][j]='.';
            }
            n--;
        }
        if(flag){
            break;
        }
    }
    mat[0][0]='O';
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        show(n);
    }
    return 0;
}