#include<bits/stdc++.h>
using namespace std;
struct party{};
// int solve_helper(int *price,int *fun,int budg ,int n,int **dp){
//     if(budg ==0){
//         return 0;
//     }
//     if(n==0){
//         return 0;
//     }
//     if(dp[n][budg]!=-1){
//         return dp[n][budg];
//     }

//     int ans;
//     if(budg - price[0]>=0){
//         int ans1 = fun[0] + solve_helper(price+1 ,fun+1 , budg - price[0] , n-1 , dp);
//         int ans2 = solve_helper(price+1 ,fun+1 , budg, n-1 , dp);
//         ans = max(ans1,ans2);
//     }
//     else{
//         return solve_helper(price+1,fun+1,budg,n-1,dp);
//     }
//     return ans;
// }
int solve_helper(int *price ,int *fun,int budg,int n){
    int **dp = new int*[budg+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[n+1];
    }
    for(int i=0;i<=budg;i++){
        dp[i][0]=0;
    }
    
    for(int i=0;i<=n;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=budg;i++){
        for(int j=0;j<=n;j++){
            dp[i][j] = dp[i-1][j];
            if(price[i-1] <= budg){
                dp[i][j] = max(dp[i][j] , fun[i-1]+dp[i-1][j-price[i-1]]);
            }
        }
    }
    for(int i=0;i<=budg;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<< " ";
        }
        cout<<endl;
    }
    
} // end of the function
void solve(int *price ,int *fun , int budg , int n){
     solve_helper(price , fun , budg , n);
}
int main(void){
    int budg;
    cin>>budg;
    int n;
    cin>>n;
    int* price = new int[n+1];
    int* fun = new int[n+1];
    int p1=1,f1=1;
    do{

        cin>>p1>>f1;
        if(p1!=0 && f1!=0){
            price[0] = p1;
            fun[0] = f1;
           for(int i=1;i<n;i++){
              cin>>price[i];
              cin>>fun[i];
            }
            solve(price , fun , budg , n);
        } /// end of if {}
    }while(p1!=0 && f1!=0);
}



/* #include<bits/stdc++.h>
using namespace std;
struct party{};
// int solve_helper(int *price,int *fun,int budg ,int n,int **dp){
//     if(budg ==0){
//         return 0;
//     }
//     if(n==0){
//         return 0;
//     }
//     if(dp[n][budg]!=-1){
//         return dp[n][budg];
//     }

//     int ans;
//     if(budg - price[0]>=0){
//         int ans1 = fun[0] + solve_helper(price+1 ,fun+1 , budg - price[0] , n-1 , dp);
//         int ans2 = solve_helper(price+1 ,fun+1 , budg, n-1 , dp);
//         ans = max(ans1,ans2);
//     }
//     else{
//         return solve_helper(price+1,fun+1,budg,n-1,dp);
//     }
//     return ans;
// }
int solve_helper(int *price ,int *fun,int budg,int n){
    int **dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[budg+1];
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    
    for(int i=0;i<=budg;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=budg;j++){
            dp[i][j] = dp[i-1][j];
            if(price[i-1] <= budg){
                dp[i][j] = max(dp[i][j] , fun[i-1]+dp[i-1][j-price[i-1]]);
            }
        }
    }
    int flag=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=budg;j++){
            cout<<dp[i][j]<< " ";
        }
        cout<<endl;    
    }
      
    
} // end of the function
void solve(int *price ,int *fun , int budg , int n){
     solve_helper(price , fun , budg , n);
}
int main(void){
    int budg;
    cin>>budg;
    int n;
    cin>>n;
    int* price = new int[n+1];
    int* fun = new int[n+1];
    int p1=1,f1=1;
    do{

        cin>>p1>>f1;
        if(p1!=0 && f1!=0){
            price[0] = p1;
            fun[0] = f1;
           for(int i=1;i<n;i++){
              cin>>price[i];
              cin>>fun[i];
            }
            solve(price , fun , budg , n);
        } /// end of if {}
    }while(p1!=0 && f1!=0);
} */