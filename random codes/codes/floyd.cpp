#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
#define INF 99999
void floyd(int** edge, int nodes){
    int** d = new int*[nodes];
    loop(i,0,nodes){
        d[i] = new int[nodes];
        loop(j,0,nodes){
            d[i][j] =edge[i][j];
        }
    }
    loop(k,0,nodes){
        loop(i,0,nodes){
            loop(j,0,nodes){
                d[i][j] = min(d[i][j] , d[i][k]+d[k][j]);
            }
        }
    }
    cout<<"The all pair shortest path is a follows"<<endl;
    loop(i,0,nodes){
        cout<< " "<<i<<" : ";
        loop(j,0,nodes){
            if(d[i][j] == INF){
                cout<< "INF ";
            }else{
                cout<<d[i][j]<< " ";
            }
        }
        cout<<endl;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<"Enter the number of vertices"<<endl;
    int v;
    cin>>v;
    int** edge = new int*[v];
    for(int i=0;i<v;i++){
        edge[i] = new int[v];
        for(int j=0;j<v;j++){
            edge[i][j] = 0;
        }
    }
    cout<<"Number of edges"<<endl;
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int s;int f;
        cin>>s>>f;
        int value ;
        cin>>value;
        edge[s][f] = value;
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(i!=j && edge[i][j]==0){
                edge[i][j] = INF;
            }
        }
    }
     cout<<"The Entered edge matrix is as follows"<<endl;
    loop(i,0,e){
        loop(j,0,e){
            if(edge[i][j] == INF){
                cout<< "INF ";
            }else{
                cout<<edge[i][j]<< " ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    floyd(edge, e);
    return 0;
}   