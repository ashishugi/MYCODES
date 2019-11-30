#include<bits/stdc++.h>
using namespace std;
bool check(char** ar,int n,int m,int i,int j,string str,bool **visited){
    visited[i][j] = true;
   if(i<0 || j<0 || i>=n || j>=m){
       return false;
   }
   if(str.length()==0){
       return true;
   }
   bool ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8;
   if(ar[i+1][j]==str[0] && (i+1<n)){
     if(visited[i+1][j]==false){
    ans1= check(ar,n,m,i+1,j,str.substr(1),visited);
     }
   }
   else  if(ar[i+1][j+1]==str[0] &&(i+1<n &&  j+1<m)){
      if(visited[i+1][j+1]==false){
      ans2 = check(ar,n,m,i+1,j+1,str.substr(1),visited);
      }
   }
   else  if(ar[i][j+1]==str[0] && (j+1<m)){
       if(visited[i][j+1]=false){
         ans3=check(ar,n,m,i,j+1,str.substr(1),visited);
       }
   }
     else if(ar[i-1][j]==str[0] && (i-1>=0)){
       if(visited[i-1][j]==false){
       ans4= check(ar,n,m,i-1,j,str.substr(1),visited);
       }
   }
     else if(ar[i-1][j+1]==str[0] && (i-1>=0 && j+1<m)){
        if(visited[i-1][j+1]==false){
        ans5=check(ar,n,m,i-1,j+1,str.substr(1),visited);
        }
   }
     else if(ar[i+1][j-1]==str[0] && (i+1<n && j-1>=0)){
         if(visited[i+1][j-1]==false){
         ans6=check(ar,n,m,i+1,j-1,str.substr(1),visited);
         }
   }
    else  if(ar[i][j-1]==str[0] && (j-1>=0)){
        if(visited[i][j-1]==false){
        ans7= check(ar,n,m,i,j-1,str.substr(1),visited);
        }
   }
   else  if(ar[i-1][j-1]==str[0] && (i-1>=0 && j>=0)){
         if(visited[i-1][j-1]==false){
         ans8=check(ar,n,m,i-1,j-1,str.substr(1),visited);
         }
   }
   else{
       return false;
   }
   if(ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8){
       return true;
   }
   else{
       return false;
   }
    
}
int main(void){
    int n,m;
    cin>>n>>m;
    char** ar = new char*[n+1];
    for(int i=0;i<n;i++){
        ar[i] = new char[m+1];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    string str = "CODINGNINJA";
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ar[i][j]=='C'){
                bool** visited = new bool*[n];
                for(int i=0;i<n;i++){
                    visited[i] = new bool[m];
                    for(int j=0;j<m;j++){
                        visited[i][j] = false;
                    }
                }
                bool sol = check(ar,n,m,i,j,str.substr(1),visited);
                if(sol){
                    flag=1;
                    break;
                }
            }
        } // end of inner loop
        if(flag==1){
            break;
        }
    }// end of outer for loop
    if(flag==1){
        cout<<"1"<<endl;
    }else{
        cout<< "0"<<endl;
    }
}