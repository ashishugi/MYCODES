#include<bits/stdc++.h>
using namespace std;
void treasure(int **ar , int size){
    int row =0 ,col = 0;
    for(int i=0;i<(size/2)-1;i++){
       
    }
}
int main(void){
    int n;
    cin>>n;
    char **ar = new char*[n+1];
    for(int i=0;i<n;i++){
        ar[i] = new char[n];
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
    }
     treasure(ar , n);
     for(int i=0;i<n;i++){
        ar[i] = new char[n];
        for(int j=0;j<n;j++){
           cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}