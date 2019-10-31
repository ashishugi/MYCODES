#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll lds(int *ar, int size){
    int *output = new int[size+1];
    output[0] = 1;
    for(int i=1;i<size;i++){

        output[i] = 1;
        for(int j=i-1;j>=0;--j){
            if(ar[j] > ar[i]){
                int temp_sol = output[j]+1;
                if(output[i] < temp_sol){
                    output[i]=temp_sol;
                }
            }
        }
    } // end of outer for {}.
    ll best =0 ;
    for(int i=0;i<size;i++){
         if(best < output[i]){
             best = output[i];
         }
       //  cout<<" -> "<<output[i] <<endl;
    }
    delete [] output;
    return best;
}
int main(void){
    int n;
    cin>>n;
    int *ar =new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    ll answer = lds(ar,n);
    delete [] ar;
    cout<<"the smallest subsequence is of length "<<answer<<endl;
}