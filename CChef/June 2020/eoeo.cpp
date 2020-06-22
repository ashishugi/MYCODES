    #include<bits/stdc++.h>
    //If amount of data to input is unknown then 
    // while (cin >> x){ code }
    // size 10, initial value 5 -> vector<int> v(10, 5);
    #define loop(i,s,e) for(int i=s;i<e;i++)
    typedef long long ll;
    using namespace std;
   ll get(ll ts){
        int count =0 ;
        if(ts%2==0){
            ll div = 4;
            while(ts%div == 0){
                div = div*2;
            }
            return (ts/div);
        }else if(ts%2!=0){
            return (ts/2);
        }
        return 0;
    }
    int main(void){
        ios::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        while(t--){
            ll ts;
            cin>>ts;
            ll ans = get(ts);
            cout<<ans<<endl;
        }
        return 0;
    }