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
        int p[n];
        int index=0;
        p[0]=ar[0].profit;
        for(int i=0;i<n;i++){
             int including=ar[i].profit;
             int lnc=-1;
            
            for(int j=i-1;j>=0;j--){
                if((ar[i].st>=ar[j].ft)){
                    lnc=j;
                   break;
                }
            }
            if(lnc != -1){
                including +=p[lnc];
            }
           p[i] = max(including , p[i-1]);
        } // end of for loop .
      
        return p[n-1];
       
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