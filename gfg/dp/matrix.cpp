#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int trace(int** ar,int n){
    int sum =0;
    int i=0;
    while(i<n){
        sum+=ar[i][i];
        i++;
    }
    return sum;
}
int row(int** ar,int n){
    int count=0;
    for(int i=0;i<n;i++){
        int flag=1;
        unordered_set<int> mp;
        for(int j=0;j<n;j++){
            if(mp.find(ar[i][j])!=mp.end()){
                flag=0;
                break;
            }else{
                mp.insert(ar[i][j]);
            }
        }
        if(flag==0){
            count++;
        }
    }
    return count;
}
int col(int** ar,int n){
    int count=0;
    for(int j=0;j<n;j++){
        int flag=1;
        unordered_set<int> mp;
        for(int i=0;i<n;i++){
             if(mp.find(ar[i][j])!=mp.end()){
                flag=0;
                break;
            }else{
                mp.insert(ar[i][j]);
            }
        }
        if(flag==0){
            count++;
        }
    }
    return count;
}
int main(void){
    int t;
    cin>>t;
    for(int q=1;q<=t;q++){
        int n;
        cin>>n;
        int** ar = new int*[n];
        for(int i=0;i<n;i++){
            ar[i] = new int[n];
            for(int j=0;j<n;j++){
                ar[i][j] =0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ar[i][j];
            }
        }
        int k = trace(ar,n);
        int r = row(ar,n);
        int c = col(ar,n);
        cout<<"Case #"<<q<<":"<<k<<" "<<r<<" "<<c<<endl; 
        
    }
}