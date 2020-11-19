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
void leftRotate(int* ar,int n,int d){
   int *temp = new int[d];
   for(int i=0;i<d;i++){
       temp[i] =0;
       temp[i] = ar[i];
       cout<<temp[i]<< " ";
   }
   for(int i=d;i<n;i++){
       ar[i-d] = ar[i];
   }
   for(int i=0;i<d;i++){
       ar[n-d+i] = temp[i];
   }
   cout<<"after the rotation "<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }
    cout<<endl;
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
    int d;
    cin>>d;
    cout<<"before the rotation "<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }
    cout<<endl;
    leftRotate(ar,n,d);
    return 0;
}