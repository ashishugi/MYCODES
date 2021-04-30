#include<iostream>
using namespace std;
void divide(char str[],int low,int high){
    char output[high+1];
    if(low<high){
            int mid = (low+high)/2;
            divide(str,low,mid-1);
            divide(str,mid+1,high);
            for(int i=high;i>0;i--){
                output[i+1]=output[i];
            }
            output[0] = str[mid];
    }
    for(int i=0;i<high;i++){
        cout<<output[i]<< " ";
    }
    cout<<endl;
}
int main(void){
    int n;
    cin>>n;
    char str[10001];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    divide(str,0,n-1);

}