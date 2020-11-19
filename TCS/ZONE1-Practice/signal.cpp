#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
double toRadian(double degree){
    double one_degree = (M_PI)/180;
    return one_degree*degree;
}
void getDistance(double* latitude,double* longitude,int n,pair<double,double>& target,int* distance){
    for(int i=0;i<n;i++){
        double lat1 =  toRadian(latitude[i]);
        double lat2 =  toRadian(target.first);
        double long1 = toRadian(longitude[i]);
        double long2 = toRadian(target.second);
        double dlong = long2 - long1;
        double dlat = lat2 - lat1;
        double ans = pow(sin(dlat / 2), 2) +  cos(lat1) * cos(lat2) *  pow(sin(dlong / 2), 2);
        ans = 2*asin(sqrt(ans));
        ans = ans*6371;
        distance[i] = ans; 
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    double* latitude = new double[n];
    loop(i,0,n){
        cin>>latitude[i];
    }
    double* longitude  = new double[n];
    loop(i,0,n){
        cin>>longitude[i];
    }
    int* height = new int[n];
    int* distance = new int[n];
    loop(i,0,n){
        cin>>height[i];
        distance[i] = 0;
    }
    pair<double,double> target;
    cin>>target.first;
    cin>>target.second;
    getDistance(latitude,longitude,n,target,distance);
    // for(int i=0;i<n;i++){
    //     cout<<distance[i]<< " ";
    // }
    int* strength = new int[n];
    for(int i=0;i<n;i++){
        strength[i] = 0;
    }
    for(int i=0;i<n;i++){
        double ans = sqrt(2*6371*height[i]);
        strength[i] = ans;
    }
    int count =0;
    for(int i=0;i<n;i++){
        //cout<<strength[i]<< " "<<height[i]<<endl;
        if(strength[i]>=distance[i]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}