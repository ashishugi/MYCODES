#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ar[5][5];
    int res =0;
    bool flag=false;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>ar[i][j];
            if(ar[i][j]==1){
                res = abs(i-2)+abs(j-2);
                flag=true;

            }
        }
        if(flag){
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}