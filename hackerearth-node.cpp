#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int x;
    int y;
    int col;
    bool special=false;
};
int main(void){
    int n;
    cin>>n;
    node* ar =  new node[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].x>>ar[i].y;
    }
    for(int i=0;i<n;i++){
        cin>>ar[i].col;
    }
    int query;
    cin>>query;
    while(query--){
        int marknode;
        cin>>marknode;
    }
    return 0;
}