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

/*******************************   O(n) Solution  *****************/
void moveToEnd(int* ar,int n){
    int count =0;
    loop(i,0,n){
        if(ar[i]!=0){
            swap(ar[i],ar[count]);
            count++;
        }
    }
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
    moveToEnd(ar,n);
    loop(i,0,n){
        cout<<ar[i]<< " ";
    }
    cout<<endl;
    return 0;
}