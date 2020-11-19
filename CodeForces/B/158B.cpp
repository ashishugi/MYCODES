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
#define pop pop_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getres(int* ar,int n,int freq[5]){
    int sum =0;
    sum += freq[0];
    for(int i=1;i<4;i++){
        if(freq[i]>0){
            for(int j=1;j<=(4-i);j++){
                if(freq[i]<=0){
                    break;
                }else if(freq[i]>0 && freq[j]>0) {
                    if(freq[i]  > freq[j]){
                        sum+=freq[i]-freq[j];
                        freq[i] = freq[i]-freq[j];
                        freq[j]=0;
                    }else if(freq[i] == freq[j] && i!=j){
                        sum+=freq[i];
                        freq[i] =0;
                        freq[j]=0;
                        break;
                    }
                    else if(freq[i] < freq[j]){
                        sum+=freq[i];
                        freq[j] = freq[j] - freq[i];
                        freq[i] =0 ;
                        break;
                    }
                }
            } // end of inner loop
        } // end of outter if
    } // end of outter loop 
   for(int i=0;i<4;i++){
       cout<<freq[i]<< " ";
   }
   cout<<endl;
   return sum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n+1];
    int freq[5];
    for(int i=0;i<5;i++){
        freq[i] = 0;
    }
    for(int i=0;i<n;i++){
        cin>>ar[i];
        freq[4-ar[i]]++;
    }
    int res = getres(ar,n,freq);
    cout<<res;
    return 0;
}