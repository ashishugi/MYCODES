#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int flipBits(int n ,int pos){
    int z =n;
    for(int i=pos;i>=0;i--){
       z = z^(1<<i);
    }
    return z;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=31;i>=0;i--){
        if(n&(1<<i)){
            n = flipBits(n,i);
            break;
        }
    }
    cout<<n<<endl;
    return 0;
}