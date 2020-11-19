#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int* ar = new int[n];
    loop(i,0,n){
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());
    int count =0 ;
    int val = ar[k-1];
    for(int i=0;i<n;i++){
        if(val<=ar[i] && ar[i]>0){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}