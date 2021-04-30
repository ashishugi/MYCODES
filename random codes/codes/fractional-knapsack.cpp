#include<bits/stdc++.h>
using namespace std;
struct sack{
    int value,weight;
};
bool compare(sack a,sack b){
    double val1 = (double)(a.value)/(a.weight);
    double val2 = (double)(b.value)/(b.weight);
    return val1>val2;
}
void frac_knapsack(struct sack ar[] , int W,int n){
    double val=0;
    int wt=0;
    sort(ar,ar+n,compare);
    for(int i=0;i<n;i++){
        if(wt+ar[i].weight <= W){
            wt+=ar[i].weight;
            val = val + ar[i].value;
        }
        else{
            val = val + (double)((double)(W-wt)/ar[i].weight)*ar[i].value;
            break;
        }
    }
    cout<<val<<endl;
}
int main(void){
    int W = 5;
    int n=4;
    sack ar[]={{60,10},{100,20},{120,30}};
    frac_knapsack(ar,W,n);
    
}