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
int getSquare(int x){
    int st = 0;
    int end = x;
    int ans = -1;
    while(st <=end){
        int mid = (st+end)/2;
        if(mid*mid == x){
            ans = mid;
            break;
        }else if(mid*mid <= x){
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}
int peak(int* ar,int n){
    int res=-1;
    for(int i=0;i<n;i++){
        if(i-1 >= 0 && i+1<n){
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1]){
                return ar[i];
            }
        }else if(i-1 <0 && i+1<n){
            if(ar[i]> ar[i+1]){
                return ar[i];
            }
        }else if(i-1>=0 && i+1>=n){
            if(ar[i] > ar[i-1]){
                return ar[i];
            }
        }else if(n==1){
            return ar[0];
        }
    }
    return -1;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int x;
    // cin>>x;
    // int res = getSquare(x);
    // cout<<res<<endl;
    int n;
    cin>>n;
    int* ar = new int[n];
    loop(i,0,n){
        cin>>ar[i];
    }
    int res = peak(ar,n);
    cout<<res<<endl;
    return 0;
}