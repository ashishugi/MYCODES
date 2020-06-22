#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
void rotateLeft(int** ar ,int** res,int row,int col){
    int p=0,q=0;
    for(int i=col-1;i>=0;i--,p++){
        for(int j=0,q=0;j<row;j++,q++){
            res[p][q] = ar[j][i];
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int row,col;
    cin>>row>>col;
    int** ar = new int*[row];
    for(int i=0;i<row;i++){
        ar[i] = new int[col];
        for(int j=0;j<col;j++){
            cin>>ar[i][j];
        }
    }
    int** res = new int*[col];
    for(int i=0;i<col;i++){
        res[i] = new int[row];
        for(int j=0;j<row;j++){
            res[i][j] =0;
        }
    }
    rotateLeft(ar,res,row,col);
    cout<<"after the rotation of the Matrix"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<< res[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}