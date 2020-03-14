#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    int a=7;
    int count=0;
    for(int i=0;i<(32);i++){
        //cout<<(1<<i)<< "yes ";
        if(a&(1<<i)){

            count++;
        }
    }
    cout<<count<<endl;
  return 0;
}