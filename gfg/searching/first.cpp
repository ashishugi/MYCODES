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
int getFirstOcc(int* ar,int st,int end,int target){
    if(st < end){
        int mid = (st+end)/2;
        if(target == ar[mid]){
            if(mid-1 >=0 and target == ar[mid-1]){
                getFirstOcc(ar,st,mid-1,target);
            }else{
                return mid;
            }
        }
        else if(target < ar[mid]){
            getFirstOcc(ar,st,mid,target);
        }else if(target >= ar[mid]){
            getFirstOcc(ar,mid+1,end,target);
        }else{
            return -1;
        }
    }
}
int getLastOcc1(int* ar,int n,int target){
    int st = 0;
    int end = n-1;
    int index = -1;
    while(st<=end){
        int mid =  (st+end)/2;
        if(target == ar[mid]){
            if(mid+1<n && ar[mid+1] == target){
                st=mid+1;
            }else{
                index =  mid;
                break;
            }
        }else if(target < ar[mid]){
            end = mid-1;
        }else if(target >= ar[mid]){
            st= mid+1;
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
    int target;
    cin>>target;
    int ans1 = getFirstOcc(ar,0,n,target);
    int ans2 = getLastOcc1(ar,n,target);
    if((ans2 - ans1) <0){ // number occurence of an elements .
        cout<<0<<endl;
    }else{
        cout<<(ans2 - ans1)<<endl;
    }
    return 0;
}