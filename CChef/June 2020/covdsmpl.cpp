#include <bits/stdc++.h>
//If amount of data to input is unknown then
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i, s, e) for (int i = s; i < e; i++)
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        int** mat = new int*[n];
        for(int i=0;i<n;i++){
            mat[i] = new int[n];
            for(int j=0;j<n;j++){
                mat[i][j] = 0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<1<<" "<<(i+1)<<" "<<(1)<< " "<<(i+1)<< " "<<(n)<<endl ;
            int x ;
            cin>>x;
            if(x==-1){
                break;
            }else{
                 for(int j=0;j<n;j++){
                    if(x > 0 && j%2==0){
                        mat[i][j] = 1;
                        x--;
                    }else{
                        mat[i][j]=0;
                    }
                }
            }
        }
        cout<<2<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<< " ";
            }
            cout<<endl;
        }
        int check;
        cin>>check;
        if(check==-1){
            break;
        }
    }
    return 0;
}