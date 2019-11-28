#include<bits/stdc++.h>
using namespace std;
void buildtree(int *ar,int *tree , int start,int end,int index){
    if(start == end){
        tree[index] = ar[start];
        return;
    }
    int mid = (start+end)/2;
    buildtree(ar,tree,start,mid,2*index);
    buildtree(ar,tree,mid+1,end,2*index+1);
    tree[index] = (tree[2*index+1]>tree[2*index])?tree[2*index]:tree[2*index+1];
}
void update(int *ar,int *tree,int start,int end ,int index , int idx,int val){
    if(start == end){
        tree[index] = val;
        ar[idx] = val;
        return;
    }
    int mid = (start+end)/2;
    if(idx > mid){
      update(ar,tree,mid+1,end,2*index+1,idx,val);  
    }
    else{
        update(ar,tree,start,mid,2*index,idx,val);
    }
    tree[index] = (tree[2*index+1]>tree[2*index])?tree[2*index]:tree[2*index+1];
}
int query(int *tree , int start,int end,int index,int left,int right){
    if(start>=left && end<=right){
        return tree[index];
    }
    if(start>right || end < left){
        return INT_MAX;
    }
    int mid = (start+end)/2;
    int ans1 = query(tree,start,mid,2*index,left,right);
    int ans2 = query(tree,mid+1,end,2*index+1,left,right);
    return ((ans1 > ans2)?ans2:ans1);
}
int main() {
    int n;
    cin>>n;
     int q;
    cin>>q;
    int *ar = new int[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
   
    int *tree = new int[4*n+1];
    buildtree(ar,tree,0,n-1,1);
    while(q--){
        char ch;
        cin>>ch;
        int left,right;
        cin>>left>>right;
        if(ch=='q'){
           
            int ans = query(tree,0,n-1,1,left-1,right-1);
            cout<<ans<<endl;
        }
        else{
          update(ar , tree ,0,n-1 , 1,left-1,right);
        }
    }
}