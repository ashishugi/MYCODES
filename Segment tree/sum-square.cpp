
/******************* this code is not working properly ****************************/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct node {
    int value;
    int type;
}
void buildtree(int *ar,node *tree,int start , int end ,int index){
    if(start == end){
        tree[index].value = ar[start];
        return;
    }
    int mid = (start+end)/2;
    buildtree(ar,tree,start,mid,2*index);
    buildtree(ar,tree,mid+1,end,2*index+1);
    tree[index].value = (tree[2*index].value*tree[2*index].value)+(tree[2*index+1].value*tree[2*index+1].value);
}
void update_add(node *tree, node *lazy ,int start,int end ,int index ,int left,int right,int val){
    if(start > end){
        return;
    }
    if(lazy[index]!=0){ // old addition
        tree[index].value+=lazy[index].value*(end-start+1);
        tree[index].type =1
        if(start!=end){
            lazy[2*index].value+=lazy[index].value;
            lazy[2*index+1].value+=lazy[index].value;
        }
        lazy[index] = 0;
       
    }
    if(start > right || end < left){
        return;
    }
    if(start>=left && end<=right){
        tree[index]+=val*(end-start+1);
        if(start!=end){
            lazy[2*index]+=val;
            lazy[2*index+1]+=val;
        }
        return;
    }
    int mid = (start+end)/2;
    update_add(tree,lazy,start,mid,2*index,left,right,val);
    update_add(tree,lazy,mid+1,end,2*index+1,left,right,val);
    tree[index] =  (tree[2*index]*tree[2*index])+(tree[2*index+1]*tree[2*index+1]);
}
void update_setall( ll *tree,ll *lazy,int start,int end,int index,int left,int right,int val){
     if(start > end){
        return;
    }
    if(lazy[index]!=0){
        tree[index]+=lazy[index]*(end-start+1);
        if(start!=end){
            lazy[2*index]+=lazy[index];
            lazy[2*index+1]+=lazy[index];
        }
        lazy[index] = 0;
    }
    if(start > right || end < left){
        return;
    }
    if(start>=left && end<=right){
        tree[index]=val;
        
        if(start!=end){
            lazy[2*index]=val;
            lazy[2*index+1]=val;
        }
        return;
    }
    int mid = (start+end)/2;
    update_setall(tree,lazy,start,mid,2*index,left,right,val);
    update_setall(tree,lazy,mid+1,end,2*index+1,left,right,val);
    tree[index] =  (tree[2*index]*tree[2*index])+(tree[2*index+1]*tree[2*index+1]);
}
ll query(ll *tree,ll *lazy,int start,int end ,int index,int left,int right){
    if(start > end){
        return 0;
    }
    if(lazy[index]!=0){
        tree[index]+=lazy[index]*(end-start+1);
        if(start!=end){
            lazy[2*index]+=lazy[index];
            lazy[2*index+1]+=lazy[index];
        }
        lazy[index] = 0;
    }
     if(start > right || end < left){
        return 0;
    }
    if(start>=left && end<=right){
        return tree[index];
    }
     int mid = (start+end)/2;
    ll ans1 = query(tree,lazy,start,mid,2*index,left,right);
     ll  ans2  = query(tree,lazy,mid+1,end,2*index+1,left,right);
    return (ans1*ans1+ans2*ans2);
}
int main() {

	int t;
    cin>>t;
    int i=1;
    while(t--){
        
        cout<<"Case "<<i<< ":"<<endl;
        i++;
    int n;
    int q;
    cin>>n>>q;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    node *tree = new node[4*n];
     node *lazy = new node[4*n];
    for(int i=0;i<4*n;i++){
        lazy[i].value = 0;
        tree[i].value = 0;
        lazy[i].type = 0;
        tree[i].type = 0;
    }
    buildtree(ar,tree,0,n-1,1);
    
    while(q--){
        int type;
        cin>>type;
        if(type==2){
            int left,right;
            cin>>left>>right;
           int ans = query(tree,lazy ,0,n-1,1,left,right);
            
           
            cout<<ans<<endl;
        }
        else if(type==1){
            int left,right;
            cin>>left>>right;
            int x;
            cin>>x;
            update_add(tree,lazy,0,n-1,1,left,right,x);
        }
        else if(type == 0){
            int left,right,x;
            cin>>left>>right>>x;
            update_setall(tree,lazy,0,n-1,1,left,right,x);
            
        }
    }
  } // end loop for test case;
}