#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lids(int *ar , int size){
    int *inc_out = new int[size+1];
    inc_out[0] = 1;
    for(int i=1;i<size;i++){
        inc_out[i]=1;
        for(int j=i-1;j>=0;--j){
            if(ar[j] < ar[i]){
                int sol = inc_out[j]+1;
                if(sol > inc_out[i]){
                    inc_out[i] = sol;
                }
            }
        }
    }
    /******************** now for decreasing one ***************************/
    int *dec_out = new int[size+1];
    dec_out[0]=1;
    for(int i=1;i<size;i++){
        dec_out[i]=1;
        for(int j=i-1;j>=0;--j){
            if(ar[j]>ar[i]){
            int sol = dec_out[j]+1;
            if(sol > dec_out[i]){
                dec_out[i] = sol;
            }
          }
        }
    }
    cout<<"now for the sol "<<endl;
    for(int i=0;i<size;i++){
         cout<<inc_out[i]<<" and "<<dec_out[i]<<endl; 
        inc_out[i] = inc_out[i]+dec_out[i];
    }
    int max=1;
    for(int i=0;i<size;i++){
        if(max<inc_out[i]){
            max = inc_out[i];
        }
    }
    return max;
}
int main(void){
    int n;
    cin>>n;
    int *ar =new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    ll answer = lids(ar,n);
    delete [] ar;
    cout<<"the smallest subsequence is of length "<<answer<<endl;
}