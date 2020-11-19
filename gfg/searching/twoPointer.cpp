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
string twoPointer(int* ar,int n,int target){
    int st = 0;
    int end = n-1;
    while(st < end){
        if(ar[st]+ar[end] == target){
            return "YES";
        }
        else if(ar[st]+ar[end] > target){
            end--;
        }else{
            st++;
        }
    }
    return "NOT POSSIBLE";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    loop(i,0,n){
        cin>>ar[i];
    }
    int target;
    cin>>target;
    string res = twoPointer(ar,n,target);
    cout<<res<<endl;
    return 0;
}