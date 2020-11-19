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
double median(int* ar1,int n1,int* ar2,int n2){
    int low = 0;
    int high = n1;
    while(low < high){
        int i1 =  (low+high)/2;
        int i2 = ((n1+n2)/2 ) - i1;
        int max1 = 
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n1,n2;
    int* ar1 = new int[n];
    for(int i=0;i<n1;i++){
        cin>>ar1[i];
    }
    cin>>n2;
    int* ar2 = new int[n2];
    for(int i=0;i<n2;i++){
        cin>>ar2[i];
    }
    double ans = median(ar1,n1,ar2,n2);
    cout<<ans<<endl;
    return 0;
}