#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int ar[n];
    int br[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        br[i]=ar[i];
    }
    int rank[n]={0};
    sort(br,br+n);
    int count=1;
    int temp_count=0;
    for(int i=0;i<n;i++){
        int temp = br[i];
        temp_count=0;
        while(temp==br[i] && i<n){
            temp_count++;
            rank[i] = count;
            i++;
            cout<<"br "<<br[i]<< " count "<<count<<endl;
        }
        i--;
        count = temp_count;
    }
    for(int i=0;i<n;i++){
        cout<<rank[i]<< " ";
    }
}