#include<bits/stdc++.h>
#include<math.h>
using namespace std;
//int n;
void buildtree(char* str , int *tree , int start,int end,int index,int *power){
    if(start == end){
        tree[index] = str[start] - '0';
        return;
    }
    int mid = (start+end)/2;
    buildtree(str,tree,start,mid,2*index,power);
    buildtree(str,tree,mid+1,end,2*index+1,power);
    tree[index] = ((tree[2*index+1])+(tree[2*index]*power[end-mid])%3)%3;
}
void update(char* str,int *tree , int start,int end ,int index,int idx,int *power){
    if(start == end){
       if(str[idx]=='0'){
            str[idx]='1';
            tree[index] = 1;
        }
        return;
    }
    int mid = (start+end)/2;
    if(mid >= idx){
    update(str,tree,start,mid,2*index,idx,power);
    }
    else{
    update(str,tree,mid+1,end,2*index+1,idx,power);
    }
   tree[index] = ((tree[2*index+1])+(tree[2*index]*power[end-mid])%3)%3;
}
int query(int *tree,int start,int end ,int index,int left,int right,int *power){
    if(start > right || end<left){
        return 0;
    }
    if(start>=left && end<=right){
        int ans = tree[index]*power[right - end];
        return ans%3;
    }
    
    int mid = (start+end)/2;
    int ans1 = query(tree,start,mid,2*index,left,right,power);
    int ans2 = query(tree,mid+1,end,2*index+1,left,right,power);
    int finalanswer =  (ans1+ans2)%3;
    return finalanswer;

}
int main(void){
    int n;
    cin>>n;
    //string str;
    char* str = new char[n+1];
    cin>>str;
    int q;
    cin>>q;
    int *tree = new int[4*n];
    int *power = new int[n];
    power[0]=1;
    for(int i=1;i<n;i++){
        power[i] = ((power[i-1]%3)*2)%3;
    }
    buildtree(str, tree,0,n-1,1,power);
    while(q--){
        int type;
        cin>>type;
        if(type == 0){
            int left,right;
            cin>>left>>right;
            int ans = query(tree,0,n-1,1,left,right ,power);
            cout<<ans<<endl;
        }
        else{
            int index;
            cin>>index;
            update(str , tree,0,n-1,1 ,index,power);
        }
    }
    
   
}