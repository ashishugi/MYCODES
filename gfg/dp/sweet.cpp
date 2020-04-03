#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getmin(int a,int b){
  if(a>b || a<=0){
    return INT_MAX-20;
  }
  cout<<a<< " "<<b<<endl;
  if(a==b){
    return 0;
  }
  int ans =INT_MAX;
  ans = min(1+getmin(a-1,b) , 1+getmin(2*a,b));
  return ans;
}
int main(void){
    int a,b;
    cin>>a>>b;
    cout<<getmin(a,b)<<endl;
  return 0;
}