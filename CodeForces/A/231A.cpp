#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int count = 0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int temp_count =0;
        if(a==1){
            temp_count++;
        }
        if(b==1){
            temp_count++;
        }
        if(c==1){
            temp_count++;
        }
        //
        if(temp_count>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}