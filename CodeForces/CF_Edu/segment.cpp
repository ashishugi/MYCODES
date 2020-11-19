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
void buildtree(int* tree,int * ar,int left,int right,int index){
    cout<<left<< " " <<right<< " "<<index<<endl;
    if(right == left){
        tree[index] = ar[left];
        return;
    }
    int mid = (left+right)/2;
    buildtree(tree,ar,left,mid,2*index);
    buildtree(tree,ar,mid+1,right,2*index+1);
    tree[index] = tree[2*index]+tree[2*index+1];
}
void update(int* tree,int val ,int idx, int index,int left,int right){
    if(left == right){
        tree[index] = val;
        return;
    }
    int mid =  (left+right)/2;
    if(idx > mid){
        update(tree,val,idx,2*index+1,mid+1,right);
    }else {
        update(tree,val,idx,2*index,left,mid);
    }
    tree[index] = tree[2*index]+tree[2*index+1];
}
int query(int* tree,int l,int r,int left,int right ,int index){
    //cout<<l<< " " <<r<< " "<<index<<endl;
    if(l >right || r <left){
        return 0;
    }
    if(l>=left && r<=right){
        return tree[index];
    }
    int mid = (left+right)/2;
    int ans1 = query(tree,l,r,left,mid,2*index);
    int ans2 = query(tree,l,r,mid+1,right,2*index+1);
    return ans1+ans2;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int* tree = new int[4*n+1];
    for(int i=0;i<=2*n;i++){
        tree[i] = 0;
    }
    buildtree(tree,ar,0,n-1,1);
    for(int i=0;i<=2*n;i++){
        cout<<tree[i]<< " ";
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<query(tree,l,r,0,n-1,1);
    }
    return 0;
}