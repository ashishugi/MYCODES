#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
typedef long long ll;
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int count =0;
        bool flag = true;
        int steps =0;
        while(n!=1){
            if(n%6 == 0){
                n = n/6;
                count =0;
            }else{
                if(count > 2){
                    flag = false;
                    break;
                }else{
                    n = 2*n;
                    count++;
                }
            }
            steps++;
        }
        if(flag == false){
            cout<<(-1)<<endl;
        }else{
            cout<<steps<<endl;
        }
    }
    return 0;
}