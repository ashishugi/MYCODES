#include<bits/stdc++.h>
using namespace std;
struct node{
    int max;
    int smax;
};
void buildtree(int *ar,struct node *tree,int start,int end,int index){
    if(start == end){
        tree[index].max=ar[start];
        tree[index].smax = INT_MIN;
        return; 
    }
    int mid = (start+end)/2;
    buildtree(ar,tree,start,mid,2*index);
    buildtree(ar,tree,mid+ 1,end,2*index+1);
    int sol1 = min(max(tree[2*index].max , tree[2*index+1].smax) , max(tree[2*index+1].max , tree[2*index].smax));
    int sol2 = max(tree[2*index].max ,tree[2*index+1].max);
    tree[index].max = sol2;
    tree[index].smax = sol1;
}
void update(int *ar , struct node *tree , int start,int end,int index,int idx ,int val){

    if(start == end){
        ar[start] = val;
        tree[index].max = val;
        tree[index].smax = INT_MIN;
        return;
    }
    int mid = (start+end)/2;
    if(idx > mid){
        update(ar,tree,mid+1,end,2*index+1,idx,val);
    }
    else{
        update(ar,tree,start,mid,2*index,idx,val);
    }
    int sol1 = min(max(tree[2*index].max , tree[2*index+1].smax) , max(tree[2*index+1].max , tree[2*index].smax));
    int sol2 = max(tree[2*index].max ,tree[2*index+1].max);
    tree[index].max = sol2;
    tree[index].smax = sol1;
}
struct node query(struct node *tree , int start,int end,int index,int left,int right){
     struct node temp;
    if(start>=left && end<=right){
        return tree[index];
    }
    if(start > right || end<left){
        temp.max=INT_MIN;
        temp.smax=INT_MIN;
        return temp;
    }
    int mid = (start+end)/2;
    struct node sol1 = query(tree ,start,mid,2*index,left,right);
    struct node sol2  = query(tree,mid+1,end,2*index+1,left,right);
    struct node ans ;
    ans.smax  = min(max(sol1.max,sol2.smax),max(sol1.smax,sol2.max));
    ans.max = max(sol1.max,sol2.max);
    return ans;

}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    struct node *tree = new node[4*n];
    buildtree(ar,tree,0,n-1,1);
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        int left,right;
        cin>>left>>right;
        if(ch== 'U'){
            update(ar,tree,0,n-1,1,left-1,right);
        }
        else{
            struct node ans = query(tree,0,n-1,1,left-1,right-1);
            cout<<ans.max+ans.smax<<endl;
        }
    }
}