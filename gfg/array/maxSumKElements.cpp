#include<bits/stdc++.h>
using namespace std;
int KthSum(vector<int>& ar,int k){
    int len = ar.size();
    // [ 1 , - 2, 4 , 5, - 43, 2 0 , 12 ] ; k =3
    int sum = 0;
    int index = 0;
    for(int i=0;i<k;i++){
        sum+=ar[i];
        index = i;
    }
    index++;
    int res = sum; // 3
    for(int i=1;i<=(len - k);i++){ // 1 to =4
        sum-=ar[i-1]; // 3-1=2 , 7 + 2 = 9 
        sum+=ar[i+k-1];// 2+5 = 7
        res = max(res,sum);//7
    }
    return res;
}
int main(void){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum = KthSum(ar,k);
    cout<<sum<<endl;
    return 0;
}