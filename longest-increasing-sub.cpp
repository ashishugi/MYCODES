#include<bits/stdc++.h>
using namespace std;
int lis(int *ar,int n){
    int *output = new int[n];
    output[0] = 1;
  
    for(int i=1;i<n;i++){
        output[i] = 1;
        for(int j=i-1;j>=0;j--){ 
            if(ar[i]>ar[j]){
               int possible = output[j]+1;
                if(possible  >= output[i]){
                    output[i] = possible;
                }
            }
        } // end of inner for{}
    } // end of outer for{}
    int max =0 ;
    for(int i=0;i<n;i++){
         if(max<output[i]){
             max= output[i];
         }
      //  cout<<"-> "<<output[i]<<" and "<<ar[i]<<endl;
        
    }
    delete [] output;
    return max;
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int answer = lis(ar,n);
    delete [] ar;
    cout<<answer<<endl;
}