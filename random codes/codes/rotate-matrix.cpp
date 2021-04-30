#include<stdio.h>
using namespace std;
void rotate(int **ar,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
        }
    }
}
int main(void){
    int n;
    cin>>n;
    int **ar = new int*[int];
    for(int i=0;i<n;i++){
        ar[i] = new int[n];
        for(int j=0;j<n;j++){
            cin>>ar[i];
        }
    }
    rotate(ar,n);
    cout<<"the rotated array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<endl;
    }
}