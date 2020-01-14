#include<bits/stdc++.h>
using namespace std;
int mincost(int cost[][4],int n){
    int* dp = new int[1<<n];
    for(int i=0;(i<(1<<n));i++){
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    int mask=0;
    for(int mask=0;mask<(1<<n);mask++){
        int count =0;
        int temp_mask =mask;
        while(temp_mask > 0){
            if(temp_mask%2==1){
                count++;
            }
            temp_mask=temp_mask/2;
        }
        for(int j=0;j<n;j++){
            if(!(mask&(1<<j))){
                dp[mask|(1<<j)] = min(dp[mask|(1<<j)] , dp[mask]+cost[count][j]);
            }
        }
    }
    return dp[(1<<n)-1];
}
int main(void){
    int cost[4][4] = {{10,2,6,5},{1,15,12,8},{7,8,9,3},{15,13,4,10}};
    cout<<mincost(cost,4)<<endl;
}