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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int target;
    cin>>target;
    bool flag = false;
    // [5,2,3,2,1,7] , target= 4;
    unordered_set<int> hashmap;
    for(int i=0;i<n;i++){
        int checkNum = (target - ar[i]);
        if(hashmap.find(checkNum) != hashmap.end()){
            flag = true;
            break;
        }else{
            hashmap.insert(ar[i]);
        }
    }
    cout<<flag<<endl;
    return 0;
}