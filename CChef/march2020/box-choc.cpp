#include<bits/stdc++.h>
#include<vector>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* input = new int[n];
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        int maxi = *max_element(input,input+n);
        vector<int> pos;
        for(int i=0;i<n;i++){
            if(maxi == input[i]){
                pos.push_back(i);
            }
        }
        int count=0;
        int k=n;
        int half = n/2;
        if(pos.size() == n){
            cout<<"0"<<endl;
        }else{
                for(int i=0;i<k;i++){
                int flag=1;
                for(auto x : pos){
                    if((x+i)%n < half){
                        flag=0;
                        break;
                    }
                }
                if(flag == 1){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
  return 0;
}