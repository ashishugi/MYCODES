#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int div = ceil(n/2);
    cout<<div<<endl;
    for(int i=1;i<=div;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=div+1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}