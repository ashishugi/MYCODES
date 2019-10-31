#include<bits/stdc++.h>
#include<map>
using namespace std;
int window(int ar[],int n,int k,int output[]){
    int j=0;
    int m=0;
   
    for(int i=0;i<(n-k+1);i++){
         map<int ,int > mp;
        for( m = i;m<i+k;m++){
            mp[ar[m]]++;
        }
        output[j]= mp.size();
        j++;
    }
    return j;
}
int main(void){
    int n;
    cin >> n;
   
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int k;
    cin>>k;
    int output[n];
    int size = window(ar,n,k,output);
    for(int i=0;i<size;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    // string str;
    // cout<<"enter the string ";
    // cin>>str;
    // map < int ,int > mp;
    // for(int i=0;i<str.length();i++){
    //     mp[str[i]]++;

    // }
    // cout<<mp.size()<<endl;
}