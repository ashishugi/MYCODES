#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int minimum(int n){

  int *output=new int[n+2];
  output[0]=0;
  output[1] =1;
  output[2]=2;
  output[3] = 3;
  for(int i=4;i<=n;i++){
    int minimum = INT_MAX;
    int temp=0;
    int ans = INT_MAX;
    for(int j =1;j<=i/2;j++){
      int sol = j*j;
      if(sol <= i){
         ans= min(output[i -sol]+1 , ans); 
        if(ans < minimum){
          minimum = ans;
         }
      }
    }
    output[i] = minimum;

  }
  return output[n];

}
int main(void){
    int n;
    cin>>n;
    int *dp = new int[n+5];
    for(int i=0;i<=n;i++){
      dp[i] = i*i;
    }
    int count = minimum(n);
    cout<<count<<endl;
    return 0;
}