#include <bits/stdc++.h>
using namespace std; 
int findmax(int arr[],int n) {
    int current_sum=0; 
    int best_sum=arr[0];
    for(int i=0;i<n;i++){
        current_sum=current_sum+arr[i]; 
        if(best_sum<current_sum) best_sum=current_sum;
        if(current_sum<arr[i]) current_sum=arr[i];
    }
    return best_sum;
}
int main() {
    int r,c;
    cin>>r>>c;
    int mat[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>mat[i][j];
    int maxs=INT_MIN,cs;
    for(int i=0;i<c;i++) { 
        int vect[r]={0};
        for(int j=i;j<c;j++) { 
            for(int l=0;l<r;l++) {
                vect[l]+=mat[l][j];
            } 
            cs=findmax(vect,r); 
            maxs=max(maxs,cs);
        } 
    }
    cout<<maxs<<endl; 
}
