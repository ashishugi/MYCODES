#include<bits/stdc++.h>
using namespace std;
void update(int index,int value,int* bit,int n){
    for(;index<=n;index += index&(-index)){
        bit[index]+=value;
    }
}
int query(int index,int* bit){
    int sum=0;
    for(;index>0;index-=index&(-index)){
        sum+=bit[index];
    }
    return sum;
}
int main(void){
    int n;
    cin>>n;
    int* ar= new int[n+1]();
    int* bit = new int[n+1]();
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        update(i,ar[i],bit,n);
    }
    cout<<query(5,bit)<<endl;
}