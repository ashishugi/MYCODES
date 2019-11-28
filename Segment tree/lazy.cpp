#include<bits/stdc++.h>
using namespace std;
void buildtree(int *ar,int *tree,int start , int end ,int index){
    if(start == end){
        tree[index] = ar[start];
        return;
    }
    int mid = (start+end)/2;
    buildtree(ar,tree,start,mid,2*index);
    buildtree(ar,tree,mid+1,end,2*index+1);
    tree[index] = tree[2*index]+tree[2*index+1];
}
void update(int *tree,int *lazy,int start,int end ,int left,int right,int index , int val){
    if(start > end){
        return;
    }
    if(lazy[index]!=0){
        tree[index]+=lazy[index];
        if(start!=end){
            lazy[2*index]+=lazy[index];
            lazy[2*index+1]+=lazy[index];
        }
        lazy[index]=0;
    }
    if(start > right || end < left){
        return;
    }
    if(start>=left && end<=right){ // complete overlap
        tree[index]+=val;
        if(start!=end){
             lazy[2*index]+=val;
            lazy[2*index+1]+=val;
        }
        return;
    }
    int mid = (start+end)/2;
    update(tree,lazy,start,mid,left,right,2*index,val);
    update(tree,lazy,mid+1,end,left,right,2*index+1,val);
    tree[index] = tree[2*index]+tree[2*index+1];
}
int query(int *tree,int start,int end,int index,int left,int right){
   if(start >= left && end<=right){
       return tree[index];
   }
   if(start>right || end < left){
       return 0;
   }
   int mid = (start+end)/2;
   int ans1 = query(tree,start,mid,2*index,left,right);
   int ans2 = query(tree,mid+1,end ,2*index+1,left,right);
   return ans1+ans2;
}
int main(void){
   int 

}