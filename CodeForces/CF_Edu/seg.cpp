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
void buildTree(int* ar,int * tree,int left ,int right,int index){
    if(right == left){
        tree[index] = ar[left];
        return;
    }
    int mid = (left+right)/2;
    buildTree(ar,tree,left,mid,2*index);
    buildTree(ar,tree,mid+1,right,2*index+1);
    tree[index] = tree[2*index]+tree[2*index+1];
}

void update(int* ar,int* tree,int index,int left,int right,int idx,int value){
    if(left == right){
        tree[index] = value;
        ar[idx] = value;
        return ;
    }
    int mid = (left+right)/2;
    if(idx > mid){
        update(ar,tree,2*index+1,mid+1,right,idx,value);
    }else{
        update(ar,tree,2*index,left,mid,idx,value);
    }
    tree[index] = tree[2*index]+tree[2*index+1];

}
int query(int* tree,int start,int end,int index,int left,int right){
    if(left > end || right<start){
        return 0;
    }
    if(start>=left && end<=right){
        return tree[index];
    }
    int mid = (start+end)/2;
    int ans1 = query(tree,start,mid,2*index,left,right);
    int ans2 = query(tree,mid+1,end,2*index+1,left,right);
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
    int* tree = new int[4*n];
    buildTree(ar,tree,0,n-1,1);
    for(int i=0;i<4*n;i++){
        tree[i] =0;
    }
    buildTree(ar,tree,0,n-1,1);
    int l,r;
    cin>>l>>r;
    update(ar,tree,1,0,n-1,1,1);
    int ans = query(tree,0,n-1,1,l,r);
    cout<<ans<<endl;
    return 0;
}