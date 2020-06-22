#include<bits/stdc++.h>
#include<vector>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
#define MAX 10000000
vector<int> prime;
bool isprime[MAX];
void sieve(){
    memset(isprime,true,sizeof(isprime));
    isprime[0]=false;
    isprime[1] = false;
    for(int i=2;i*i<MAX;i++){
       if(isprime[i] == true){
            for(int j=i*i;j<MAX;j+=i){
                isprime[j] = false;
            }
       }
    }
    for(int i=2;i<MAX;i++){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    delete[] isprime;
    // for(int i=0;i<20;i++){
    //     cout<<prime[i]<< " ";
    // }
    // cout<<endl;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    return 0;
}