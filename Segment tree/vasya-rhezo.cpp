#include<bits/stdc++.h>
using namespace std;
struct node{
    int a;
    int b;
};
struct node2{
    int a;
    int b;
    int index;
};
void buildtree(node *ar,node2 *tree ,int start,int end ,int index){
    if(start == end){
        tree[index].a = ar[start].a;
        tree[index].b = ar[start].b;
        tree[index].index = start;
        return;
    }
    int mid =(start+end)/2;
    buildtree(ar,tree,start,mid,2*index);
    buildtree(ar,tree,mid+1,end ,2*index+1);
    if(tree[2*index].a > tree[2*index+1].a){
        tree[index].a = tree[2*index].a;
        tree[index].b = tree[2*index].b;
        tree[index].index = tree[2*index].index;
    }
    else if(tree[2*index+1].a >  tree[2*index].a){
        tree[index].a = tree[2*index+1].a;
        tree[index].b = tree[2*index+1].b;
        tree[index].index = tree[2*index+1].index;
    }
    else{ // if Ai is equal
        if(tree[2*index].b!=tree[2*index+1].b){ // with minimum value of Bi
                if(tree[2*index].b < tree[2*index+1].b){
                     tree[index].a = tree[2*index].a;
                     tree[index].b = tree[2*index].b;
                     tree[index].index = tree[2*index].index;
                }
                else{
                    tree[index].a = tree[2*index+1].a;
                    tree[index].b = tree[2*index+1].b;
                    tree[index].index = tree[2*index+1].index;
                }
        }
        else{ // if Bi is equal
            if(tree[2*index].index < tree[2*index+1].index){
                 tree[index].a = tree[2*index].a;
                 tree[index].b = tree[2*index].b;
                 tree[index].index = tree[2*index].index;

            }
            else{
                tree[index].a = tree[2*index+1].a;
                tree[index].b = tree[2*index+1].b;
                tree[index].index = tree[2*index+1].index;
            }
        }
    }
}
node2 query(node2 *tree , int start,int end ,int index ,int left,int right){
    node2 temp;
    if(start >= left && end<=right){
        return tree[index];
    }
    if(start > right || end<left){
        temp.a = INT_MIN+20;
        temp.b=INT_MAX-20;
        temp.index = INT_MAX-20;
        return temp;
    }
    int mid = (start+end)/2;
    node2 ans;
    node2 sol1 = query(tree,start,mid,2*index,left,right);
    node2 sol2 = query(tree,mid+1,end,2*index+1,left,right);
     if(sol1.a > sol2.a){
        ans.a = sol1.a;
        ans.b = sol1.b;
        ans.index = sol1.index;
    }
    else if(sol2.a >  sol1.a){
        ans.a =     sol2.a;
        ans.b =     sol2.b;
        ans.index = sol2.index;
    }
    else{ // if Ai is equal
        if(sol1.b!=sol2.b){ // with minimum value of Bi
                if(sol1.b < sol2.b){
                     ans.a =     sol1.a;
                     ans.b =     sol1.b;
                     ans.index = sol1.index;
                }
                else{
                    ans.a =      sol2.a;
                    ans.b =      sol2.b;
                    ans.index =  sol2.index;
                }
        }
        else{ // if Bi is equal
            if(sol1.index < sol2.index){
                 ans.a =     sol1.a;
                 ans.b =     sol1.b;
                 ans.index = sol1.index;

            }
            else{
                ans.a =     sol2.a;
                ans.b =     sol2.b;
                ans.index = sol2.index;
            }
        }
    }
    return ans;
}
int main(void){
    int n;
    cin>>n;
    node *ar = new node[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].a;
    }
    for(int i=0;i<n;i++){
        cin>>ar[i].b;
    }
    int q;
    cin>>q;
    node2 *tree = new node2[4*n];
    buildtree(ar,tree,0,n-1,1);
    while(q--){
        int left,right;
        cin>>left>>right;
       node2 ans = query(tree , 0,n-1,1,left-1,right-1);
       cout<<ans.index+1<<endl;
    }
}