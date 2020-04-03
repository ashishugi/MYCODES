#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
class item{
    public:
    int val;
    int wt;
};
bool compare(item a ,item b){
    return a.val>b.val;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int W;
        int n;
        cin>>n;
        cin>>W;
        item* ar= new item[n];
        for(int i=0;i<n;i++){
            cin>>ar[i].val;
        }
        for(int i=0;i<n;i++){
            cin>>ar[i].wt;
        }
        sort(ar,ar+n,compare);
        int profit=0;
        for(int i=0;i<n;i++){
            if(ar[i].wt <= W){
                profit+=ar[i].val;
                W-=ar[i].wt;
            }
        }
        cout<<profit<<endl;

    }
  return 0;
}