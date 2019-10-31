#include<bits/stdc++.h>
using namespace std;
struct mall{
  int wt;
  int value;
};
bool compare(struct mall a , struct mall b){
  if(((double)(a.value)/a.wt) != ((double)(b.value)/b.wt) ){
    return ((double)(a.value)/a.wt) > ((double)(b.value)/b.wt);
  }
  else {
    return a.value > b.value;
  }
}
void knapsack(struct mall ar[] , int W , int n){
  int val=0;
  int weight =0;
  for(int i=0;i<n;i++){
    if(weight+ar[i].wt <= W){
      weight += ar[i].wt;
      val += ar[i].value;
    }
  }
  cout<<"max weigth that can be carried is "<<weight<<endl;
  cout<<"max value that can be obatained is "<<val<<endl;

}
int main(void){
   int n;
   cout<<"enter number of elements"<<endl;
   cin>>n;
    struct mall ar[n];
    cout<<"enter weight of elements"<<endl;
    for(int i=0;i<n;i++){
      cin>>ar[i].wt;
    }
    cout<<"enter value of elements"<<endl;
    for(int i=0;i<n;i++){
      cin>>ar[i].value;
    }
    sort(ar,ar+n,compare);
     for(int i=0;i<n;i++){
     cout<<ar[i].wt<<" " <<ar[i].value<<endl;
    }
    int W;
    cout<<"enter maximum value that a sack can have"<<endl;
    cin>>W;
    knapsack(ar,W,n);

}