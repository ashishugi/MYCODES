#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int numberOfOnes(int* ar,int n){
    int final_ans = 0;
    int temp =0;
    for(int i=0;i<n;i++){
        if(ar[i] == 1){
            temp++;
        }else{
            final_ans = max(final_ans , temp);
            temp =0 ;
        }
    }
    final_ans = max(final_ans , temp);
    return final_ans;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans = numberOfOnes(ar,n);
    cout<<ans<<endl;
    return 0;
}