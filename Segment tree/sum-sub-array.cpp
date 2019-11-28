#include<bits/stdc++.h>
using namespace std;
struct node{
    int maxsum;
    int sum;
    int psum;
    int ssum;
};
void buildtree(int *ar,node *tree ,int start,int end ,int index){
    if(start == end){
        tree[index].maxsum = ar[start];
        tree[index].sum = ar[start];
        tree[index].psum = ar[start];
        tree[index].ssum = ar[start];
        return;
    }
    int mid = (start+end)/2;
    buildtree(ar,tree,start,mid,2*index);
    buildtree(ar,tree,mid+1,end,2*index+1);
    tree[index].sum = tree[2*index].sum  + tree[2*index+1].sum;
    tree[index].psum = max(tree[2*index].sum+tree[2*index+1].psum , tree[2*index].psum );
    tree[index].ssum = max(tree[2*index+1].sum+tree[2*index].ssum , tree[2*index+1].ssum);
    tree[index].maxsum = max(tree[2*index+1].psum+tree[2*index].ssum , max(max(tree[2*index].maxsum , tree[2*index+1].maxsum) , max(tree[2*index].sum+tree[2*index+1].psum , tree[2*index+1].sum+tree[2*index].ssum)));
}
node query(node *tree , int start,int end ,int index ,int left ,int right){
    if(start >= left && end <= right ){
        return tree[index];
    }
    if(start>right || end<left){
        node temp;
        temp.maxsum=-16000;
        temp.sum=0;
        temp.psum=-16000;
        temp.ssum=-16000;
        return temp;
    }
    int mid = (start+end)/2;
    node ans1,ans2,ans;
    ans1 = query(tree , start , mid ,2*index , left,right);
    ans2  = query(tree,mid+1 , end , 2*index+1 , left,right);
    ans.maxsum = max(ans2.psum+ans1.ssum , max(max(ans1.maxsum , ans2.maxsum) , max(ans1.sum+ans2.psum , ans2.sum+ans1.ssum)));
    ans.sum = ans1.sum  + ans2.sum;
    ans.ssum = max(ans2.sum+ans1.ssum , ans2.ssum);
    ans.psum = max(ans1.sum+ans2.psum , ans1.psum );
    return ans;
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    node *tree =new node[4*n];
    buildtree(ar,tree,0,n-1,1);
   int m;
    cin>>m;
    while(m--){
        int left , right;
        cin>>left>>right;
        node ans = query(tree,0,n-1,1,left-1,right-1);
        cout<<ans.maxsum<<endl;
        
    }
}