#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void getmatrix(int** ar,int n){
    int flag = 0; // 0->even fill at start 1->odd filling at starting .
    int even = 2;
    int odd = 1;
    for(int i=0;i<n;i++){
       if(flag == 0){
            for(int j=0;j<n;j++){
                if(j%2==0){
                        ar[i][j] = odd;
                        odd+=2;
                }else{
                        ar[i][j] = even;
                        even+=2;
                }
            }
            flag = 1;
       }else{
           for(int j=0;j<n;j++){
                if(j%2==0){
                    ar[i][j] = even;
                    even+=2;
                }else{
                    ar[i][j] = odd;
                    odd+=2;
                }
            }
            flag = 0;
       }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int** ar = new int*[n];
        for(int i=0;i<n;i++){
            ar[i] = new int[n];
            for(int j=0;j<n;j++){
                ar[i][j] = 0;
            }
        }
        getmatrix(ar,n);
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ar[i][j]<< " ";
            }
            cout<<endl;
        }
    }
    return 0;
}