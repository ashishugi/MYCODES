#include<bits/stdc++.h>
using namespace std;
struct node{
    int even=0;
    int odd=0;
};
void buildtree(int *ar , node *tree , int start,int end ,int index){
    if(start == end){
        if(ar[start]%2==0){
            tree[index].even=1;
            tree[index].odd = 0;
        }
        else{
             tree[index].even=0;
            tree[index].odd = 1;
        }
        return;
    }
    int mid = (start+end)/2;
    buildtree(ar,tree,start,mid,2*index);
    buildtree(ar,tree,mid+1,end,2*index+1);
    tree[index].even = tree[2*index+1].even + tree[2*index].even;
    tree[index].odd = tree[2*index+1].odd + tree[2*index].odd;
}
void update(int *ar,node *tree,int start,int end,int index , int idx ,int val){
    if(start == end){
        ar[idx] = val;
        if(ar[idx]%2==0){
            tree[index].even=1;
            tree[index].odd = 0;
        }
        else{
             tree[index].even=0;
            tree[index].odd = 1;
        }
        return;
    }
     int mid = (start+end)/2;
    if(mid >= idx){
    update(ar,tree,start,mid,2*index,idx,val);
    }else{
    update(ar,tree,mid+1,end,2*index+1,idx,val);
    }
    tree[index].even = tree[2*index+1].even + tree[2*index].even;
    tree[index].odd = tree[2*index+1].odd + tree[2*index].odd;
}
node query(node *tree , int start,int end ,int index,int left,int right){
    node temp;
    if(start>=left && end<=right){
        return tree[index];
    }
    if(start>right || end < left){
        temp.even = 0;
        temp.odd = 0;
        return temp;
    }
     int mid = (start+end)/2;
   node sol1 =  query(tree,mid+1,end,2*index+1,left,right);
   node sol2 =  query(tree,start,mid,2*index,left,right);
    node ans;
    ans.even = sol1.even+sol2.even;
    ans.odd = sol1.odd+sol2.odd;
    return ans;
}
int main() {

	int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int q;
    cin>>q;
    node *tree =new node[4*n];
    buildtree(ar,tree,0,n-1,1);
    while(q--){
        int que;
        cin>>que;
        int left,right;
        cin>>left>>right;
        if(que==0){
            update(ar,tree,0,n-1,1,left-1,right);
        }
        else if(que == 1){
            node ans = query(tree , 0,n-1,1,left-1,right-1);
            cout<<ans.even<<endl;
        }
        else{
             node ans = query(tree , 0,n-1,1,left-1,right-1);
            cout<<ans.odd<<endl;
        }
    }
    
}