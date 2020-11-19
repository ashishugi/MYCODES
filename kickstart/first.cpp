#include<bits/stdc++.h>
using namespace std;
int grid(int** mat,int n){
    int final_max=0;
    int res1 =INT_MIN;
    int res2 = INT_MIN;
    // down
    for(int i=0;i<n;i++){
        int curr = 0;
        int k = i;
        for(int j=0;j<n && k<n;j++,k++){
            //  cout<<1<< " "<<k<< " "<<j<<endl;
            if(mat[k][j] >0){
                curr += mat[k][j];
            }
        }
        res1 = max(res1,curr);
    }
    //upward ;
    for(int j=1;j<n;j++){
        int k = j;
        int curr =0;
        for(int i=0;k<n;i++,k++){
            if(mat[i][k] >0){
                curr += mat[i][k];
            }
            // cout<<2<< " "<<i<< " "<<k<<endl;
        }
        res2 = max(res2,curr);
    }
    return max(res1,res2);
}
int main(void){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int** mat = new int*[n];
        for(int i=0;i<n;i++){
            mat[i] = new int[n];
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
        int maximum = grid(mat,n);
        
        cout<<"Case #"<<(i+1)<< ": "<<maximum<<endl;
        
    }
    return 0;
}