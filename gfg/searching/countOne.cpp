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
int getCount(int* ar,int n){
    int st = 0;
    int end =n-1;
    int index = -1;
    while(st <= end){
        int mid = (st+end)/2;
        if(1 == ar[mid]){
            if(mid-1 >=0 && ar[mid-1] == 1){
                end = mid-1;
            }
            else{
                index = mid;
                break;
            }
        }else if(1 > ar[mid]){
                st = mid+1;
        }else {
            end =mid-1;
        }
    }
    return index;
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
    int res = getCount(ar,n);
    if(res == -1){
        cout<<-1<<endl;
    }else{
        cout<<(n-res)<<endl;
    }

    return 0;
}