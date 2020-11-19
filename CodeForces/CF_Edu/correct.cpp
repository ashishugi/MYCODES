#include<bits/stdc++.h>
using namespace std;
void createtree(int *ar,int *tree ,int start,int end,int index){
    if(start == end){
        tree[index] = ar[start];
        return;
    }
    int mid = (start+end)/2;
    createtree(ar,tree,start , mid , 2*index);
    createtree(ar,tree,mid+1,end,2*index+1);
    tree[index] = tree[2*index]+tree[2*index+1];
}
void update(int *ar ,int *tree,int start,int end,int index,int idx,int value){
    if(start ==end){
        tree[index] = value;
        ar[idx] = value;
        return;
    }
    int mid= (start+end)/2;
    if(idx > mid){
        update(ar,tree,mid+1,end,2*index+1,idx,value);
    }
    else{
        update(ar,tree,start,mid,2*index,idx,value);
    }
    tree[index] = tree[2*index+1]+tree[2*index];
}
int  query(int *tree , int start ,int end,int index ,int left ,int right){
    if(start >= left && end<= right){
        return tree[index];
    }
    if(start > right || end < left){
        return 0;
    }
    int mid = (start+end)/2;
    int ans1 = query(tree, mid+1 , end,2*index+1,left,right);
    int ans2 = query(tree,start,mid,2*index , left,right);
    return ans1+ans2;
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int *tree = new int[4*n];
    createtree(ar , tree , 0 , n-1,1);
    int l,r;
    cin>>l>>r;
    int ans = query(tree , 0,n-1,1,l,r);
    cout<<ans<<endl;
}