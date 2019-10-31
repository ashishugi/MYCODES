#include<bits/stdc++.h>
using namespace std;
struct wall{
    int t;
    int x;
    int y;
};
bool compare(struct wall a , struct wall b){
    if((a.t) != (b.t)){
        return a.t<b.t;
    }
    else if(a.y!=b.y){
        return a.y>b.y;
    }
    else{
        return a.x<b.x;
    }
}
void paint(struct wall ar[] , long long d ,int n){
     long long time = 0;
    long long cost =0;
     long long speed=0;
     long long pos=0;
    long long last =0;
    long long area =0;
    for(int i=0;i<n;i++){
        long long add = speed * (ar[i].t - last);
        area+=add;
        if(area>=d){
            break;
        }
        else if(speed < ar[i].y){
            cost+=ar[i].x;
            speed = ar[i].y;
            last = ar[i].t;
            
        }

      
        
    }
    cout<<cost<<endl;
}
int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long long  d;
    
    int n;
    cin>>n;
    cin>>d;
    struct wall ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i].t;
        cin>>ar[i].x;
        cin>>ar[i].y;
    }
    sort(ar,ar+n,compare);
  //  cout<<"the sorted one is "<<endl;
    
    paint(ar,d,n);
}