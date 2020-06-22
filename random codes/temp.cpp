#include<bits/stdc++.h>
#include<map>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ar;
    ar.push_back(1);
    ar.push_back(2);ar.push_back(1);ar.push_back(2);ar.push_back(1);ar.push_back(5);ar.push_back(6);
    map< int,int> mp;
    for(int i=0;i<ar.size();i++){
        mp[ar[i]]++;
    }
    cout<<mp.size()<<endl;
    return 0;
}