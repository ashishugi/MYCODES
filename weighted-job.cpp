    #include<bits/stdc++.h>
    using namespace std;
    struct job{
        int st;
        int ft;
        int profit;
    };
    bool compare(struct job a , struct job b){
        if(a.ft!=b.ft){
            return a.ft<b.ft;
        }
        else{
            return a.profit>=b.profit;
        }
    }
    int max_profit(struct job ar[] , int n){
        sort(ar, ar+n,compare);
        int *dp = new int[n+1];
        dp[0] = ar[0].profit;
        for(int i=1;i<n;i++){
            int value = -1;
           int min = 0;
            int maximum=i-1;
            int mid=0;
            while(min<=maximum){// binary search concept used for serching . 
                 mid = (min+maximum)/2;
                if(ar[mid].ft > ar[i].st){
                    maximum= mid-1;
                }
                else if(ar[mid].ft <= ar[i].st){
                    value = mid;
                    min = mid+1;
                }
                
            }
            if(value!=-1){
            dp[i] =  max(dp[i-1] , ar[i].profit + dp[value]);
            }
            else{
                 dp[i] =  max(dp[i-1] , ar[i].profit);
            }
        }
       return dp[n-1];
    }
    int main(void){
        int n;
        cin>>n;
        struct job ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i].st>>ar[i].ft>>ar[i].profit;
        }
        sort(ar,ar+n,compare);
        int answer = max_profit(ar,n);
        cout<<answer<<endl;

    }