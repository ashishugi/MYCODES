#include <bits/stdc++.h>
using namespace std;
class coder{
    public:
    int x;
    int y;
    int index;

};
void update(int index,int* bit){
    for(;index<300002;index+=index&(-index)){
           bit[index]++;
    }
}
int query(int index,int* bit){
    int sum=0;
    for(;index>0;index-=index&(-index)){
      sum+=bit[index];
    }
    return sum;
}
bool compare(coder a,coder b){
    if(a.x == b.x){
        return a.y<b.y;
    }
    return a.x<b.x;
}
int main(){
    int n;
    cin>>n;
    coder* ar = new coder[n+1]();
    int* bit  = new int[300002]();
    for(int i=0;i<n;i++){
        cin>>ar[i].x;
        cin>>ar[i].y;
        ar[i].index=i;
    }
    sort(ar,ar+n,compare);
    int* ans = new int[n];
    for(int i=0;i<n;){
          int end=i;
          while(end<n && (ar[i].x==ar[end].x) && (ar[i].y==ar[end].y)){
            end++;
          }
          for(int j=i;j<end;j++){ //for getting same answer
              ans[ar[j].index] = query(ar[j].y,bit);
          }
          for(int j=i;j<end;j++){
            update(ar[j].y,bit);
          }
          i=end;
       }
    for(int i=0;i<n;i++){
      cout<<ans[i]<<endl;
    }
    return 0;
}
