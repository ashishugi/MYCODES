#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
int sub(vector<int>& ar,int k){
    map<int,int> mp;
    int left = 0;
    int right = 0;
    int count = 0;
    int size = ar.size();
    while(right < size){
            mp[ar[right]]++;
        if(mp.size() > k){  
            while(mp.size() > k){
                mp[ar[left]]-=1;
                if(mp[ar[left]] <= 0){
                    mp.erase(ar[left]);
                }
                left++;
            }
        }
        count = count + (right - left)+1;
        right++;
    }
    return count;
}
int getSubarray(vector<int>& ar,int k){
    // we are calculating the  number of subarray having at most k distinct elements
    // After that will be doing k - k-1;
    int ans1 = sub(ar,k);
    int ans2 =  sub (ar,k-1);
    cout<<ans1<< " "<<ans2<<endl;
    return (ans1 - ans2);
}
int main(void){
    int n;
    cin>>n;
    vector<int> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int k;
    cin>>k;
    cout<<getSubarray(ar,k);
    return 0;
}