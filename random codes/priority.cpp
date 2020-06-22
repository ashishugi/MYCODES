#include<queue>
#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int lastStoneWeight(int* ar,int n){
    priority_queue<int> nums;
    for(int i=0;i<n;i++){
        nums.push(ar[i]);
    }
    while(nums.size()!=1){
        int val1 = nums.top();
        nums.pop();
        int val2 = nums.top();
        nums.pop();
        int ans = val1- val2;
        nums.push(ans);
        //cout<<val1<< " " <<val2<<endl;
    }
    // if(nums.size()==0){
    //     return 0;
    // }
    // else{
    //     return nums.top();
    // }
    return nums.top();
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
    cout<<lastStoneWeight(ar,n)<<endl;
    return 0;
}