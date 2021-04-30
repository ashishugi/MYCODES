#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int  dp[1003];
int m = 1000000000+7;
typedef long long ll;
int countBST( int n)
{
  /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(dp[n]>0){
        return dp[n];
    }
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = (sum%m + (countBST(i-1)*countBST(n-i))%m)%m;
        
    }
    dp[n] = sum;
    return sum;    

}


// int countBST(int n){  iterative one
//      int *output = new int[n+1];
//     memset(output , 0 ,(n+1)*sizeof(output[0]));
//     output[0] = 1;
//     output[1] = 1;
//     for(int i=2;i<=n;i++){
//         ll sum=0;
//         for(int k=1;k<=i;k++){
//             sum=(sum%m + ((output[k-1])*(output[i-k]))%m)%m;
//         }
//         output[i] = sum%m;
//     }
//     return output[n];
// }
int main(void){
    int n;
    cin>>n;
    int result  =  bst(n);
    cout<<"the result is"<<endl;
    cout<<result<<endl;
}