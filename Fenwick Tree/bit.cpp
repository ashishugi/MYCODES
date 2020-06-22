#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void build(int i , int value,int size,int* tree){
    for(int index = i;index<=size;index+=index&(-index)){
        tree[index]+=value;
    }
}
void update(int i , int value,int size,int* tree){
    
    for(int index = i;index<=size;index+=index&(-index)){
        tree[index]+=value;
    }
}
int sum(int i,int size,int* tree){
    int sum =0 ;
    for(int index = i;index>0;index-=index&(-index)){
        sum+=tree[index];
    }
    return sum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* tree = new int[n+1];
    loop(i,0,n){
        int temp;
        cin>>temp;
        build(i+1,temp,n,tree);
    }
    loop(i,0,n+1){
        cout<<tree[i]<< " ";
    }
    cout<<endl;
    int query;
    cin>>query;
    while(query-- ){
        char option;
        cin>>option;
        if(option == 'u'){
            int index;
            cin>>index;
            int value;
            cin>>value;
            tree[index+1] =  value;
            update(index+1,value,n,tree);
            cout<<" updation is done "<<endl;
              loop(i,0,n+1){
                cout<<tree[i]<< " ";
            }
            cout<<  " here"<<endl;
        }else{
            int i;
            int j;
            cout<<"reached"<<endl;
            cin>>i>>j;
            int ans =sum(j,n,tree) - sum(i-1,n,tree);
            cout<<" ans is : "<<ans<<endl;
        }
    }
    return 0;
}