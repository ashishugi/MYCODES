#include<bits/stdc++.h>
using namespace std;
int euclid_gcd(int a,int b){
  if(b==0){
    return a;
  }
  if(a<b){
    return euclid_gcd(b,a); // special case;
  }
  int smallans = euclid_gcd(b,a%b);
  return smallans;
}
int main(void){
  int a;
  int b;
  cin>>a>>b;
  int ans = euclid_gcd(a,b);
  cout<<ans<<endl;
}
