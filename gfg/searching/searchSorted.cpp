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
int getIndex(int* ar,int n,int target){
    int st = 0;
    int end =n-1;
    while(st <= end){
        int mid = (st+end)/2;
        if(target == ar[mid]){
            return mid;
        }else if(ar[st] <= ar[mid]){
            if(target>=ar[st] && target <=ar[mid]){
                end = mid-1;
            }else{
                st=mid+1;
            }
        }else {
            if(target <=ar[end] && target>=ar[mid]){
                st=mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
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
    int ans = getIndex(ar,n,target);
    cout<<ans<<endl;
    return 0;
}