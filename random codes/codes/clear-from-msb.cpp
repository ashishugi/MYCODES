#include<iostream>
using namespace std;
int main(void){
    int n;
    int p;
    cin >> n >> p;
     int ans;
    int start=0;
    for(int i=0;i<=n;i++){
        ans  = n & (1<<i);
        if(ans!=0){
            start = i;
        }
    }
    int val = n;
    for(int m=0;m<=p;m++){
        n =( n ^ (1 << start));
        start--;
    }
  cout << n << endl;
}