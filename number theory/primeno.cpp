#include<bits/stdc++.h>
using namespace std;
int giveprime(int n){
  bool* isprime = new bool[n+2];
  for(int i=0;i<=n;i++){
    isprime[i] = true;
  }
  isprime[0] =false;
  isprime[1] = false;
  int limit = sqrt(n);
  for(int i=2;i<=limit;i++){
     if(isprime[i]==true){
     for(int j=i*i;j<=n;j=j+i){
       isprime[j] = false;
     }
   } // end of if{}
  }
  int count =0 ;
  for(int i=0;i<=n;i++){
    if(isprime[i]==true){
      count++;
    }
  }
  return count;
}
int main(void){
  int n;
  cin>>n;
  int sol = giveprime(n);
  cout<<sol<<endl;
}
