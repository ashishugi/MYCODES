#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long ll;
int main(void){
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int count=1;    
    int maximum = 1;
    loop(i,1,n){
        if(ar[i-1]<=ar[i]){
            count++;
        }else{
            count =1;
        }
        if(maximum < count){
            maximum = count;
        }
    }
    cout<<maximum<<endl;
  return 0;
}