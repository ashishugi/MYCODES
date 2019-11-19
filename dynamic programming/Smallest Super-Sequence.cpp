#include<algorithm>
#include<cstring>
using namespace std;
/************ recursive way to do use dp[][] *********************/
int smallestSuperSequence(char str1[], int len1, char str2[], int len2) { 
    if(len1 == 0){
        return len2;
    }
    if(len2 == 0){
        return len1;
    }
    if(str1[0]==str2[0]){
        return 1+smallestSuperSequence(str1+1 , len1-1 , str2+1,len2-1);
    }
    else{
        int ans1 = 1+smallestSuperSequence(str1+1 , len1-1 , str2,len2);
        int ans2 = 1+smallestSuperSequence(str1 , len1, str2+1,len2-1);
        return min(ans1,ans2);
    }
}
int smallestSuperSequence(char str1[], int len1, char str2[], int len2){
    int **dp = new int*[len1+1];
    for(int i=0;i<=len1;i++){
        dp[i] = new int[len2+1];
    }
    int j=0;
    for(int i=len1;i>=0;i--){
        dp[len1][i] = j;
        j++;
    }
    j=0;
    for(int i=len2;i>=0;i--){
        dp[i][len2] = j;
        j++;
    }
    for(int i=len1-1;i>=0;--i){
        for(int j=len2-1;j>=0;--j){
            if(str1[i]== str2[j]){
                dp[i][j] = 1+dp[i+1][j+1];
            }
            else{
                dp[i][j] = 1+min(dp[i+1][j] , dp[i][j+1]);
            }
        }
    } // end of for loop{}
    // for(int i=0;i<=len1;i++){
    //     for(int j=0;j<=len2;j++){
    //         cout<<dp[i][j]<< " "; 
    //     }
    //     cout<<endl;
    // }
    return dp[0][0];
}

int main()
{
    char str1[50], str2[50];
    cin>>str1;
    cin>>str2;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int min_len = smallestSuperSequence(str1, len1, str2, len2);
    cout<<min_len;
    return 0;
}
