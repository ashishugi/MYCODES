bool check(char ar[][MAXN],int n,int m,int i,int j,string str,bool **visited){
    visited[i][j] = true;
   if(i<0 || j<0 || i>=n || j>=m){
       return false;
   }
   if(str.length()==0){
       return true;
   }
   bool ans1=false,ans2=false,ans3=false,ans4=false,ans5=false,ans6=false,ans7=false,ans8=false;
   if((i+1<n) && ar[i+1][j]==str[0]){
     if(visited[i+1][j]==false){
    ans1= check(ar,n,m,i+1,j,str.substr(1),visited);
     }
       //visited[i+1][j]=false;
   }
    if((i+1<n &&  j+1<m) && ar[i+1][j+1]==str[0]){
      if(visited[i+1][j+1]==false){
      ans2 = check(ar,n,m,i+1,j+1,str.substr(1),visited);
      }
      //  visited[i+1][j+1]=false;
   }
    if( (j+1<m) && ar[i][j+1]==str[0] ){
       if(visited[i][j+1]==false){
         ans3=check(ar,n,m,i,j+1,str.substr(1),visited);
       }
      //  visited[i][j+1]=false;
   }
     if((i-1>=0) && ar[i-1][j]==str[0]){
       if(visited[i-1][j]==false){
       ans4= check(ar,n,m,i-1,j,str.substr(1),visited);
       }
        // visited[i-1][j]=false;
   }
     if((i-1>=0 && j+1<m) && ar[i-1][j+1]==str[0]){
        if(visited[i-1][j+1]==false){
        ans5=check(ar,n,m,i-1,j+1,str.substr(1),visited);
        }
       //  visited[i-1][j+1]=false;
   }
     if((i+1<n && j-1>=0)&& ar[i+1][j-1]==str[0] ){
         if(visited[i+1][j-1]==false){
         ans6=check(ar,n,m,i+1,j-1,str.substr(1),visited);
         }
        // visited[i+1][j-1]=false;
   }
     if((j-1>=0) && ar[i][j-1]==str[0] ){
        if(visited[i][j-1]==false){
        ans7= check(ar,n,m,i,j-1,str.substr(1),visited);
        }
       //  visited[i][j-1]=false;
   }
    if((i-1>=0 && j-1>=0) && ar[i-1][j-1]==str[0] ){
         if(visited[i-1][j-1]==false){
         ans8=check(ar,n,m,i-1,j-1,str.substr(1),visited);
         }
      //  visited[i-1][j-1]=false;
   }
    visited[i][j] = false;
  
   if(ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8){
       return true;
   }
   else{
       return false;
   }
    
}
int solve(char ar[][MAXN],int n, int m)
{
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
        return 1;
    }else{
        return 0;
    }
}