bool check(char ar[][MAXN],int n,int m,int i,int j,string str,bool **visited,int* x,int* y){
    visited[i][j] = true;
   if(i<0 || j<0 || i>=n || j>=m){
       return false;
   }
   if(str.length()==0){
       return true;
   }
   bool ans=false;
    for(int k=0;k<8;k++){
        int newx = i+x[k];
        int newy = j+y[k];
        if(newx>=0 && newx<n && newy>=0 && newy<m){
            if((ar[newx][newy] == str[0]) && !visited[newx][newy]){
               ans = check(ar,n,m,newx,newy,str.substr(1),visited , x,y);
                visited[newx][newy] = false;
               if(ans){
                   return true;
               }
            }
        }
        visited[i][j] = true;
    }
   return false;
}
int solve(char ar[][MAXN],int n, int m)
{
	 string str = "CODINGNINJA";
    int flag=0;
    int x[] = {-1,-1,0,1,1,1,0,-1};
    int y[] = {0,1,1,1,0,-1,-1,-1};
      bool** visited = new bool*[n];
                for(int i=0;i<n;i++){
                    visited[i] = new bool[m];
                    for(int j=0;j<m;j++){
                        visited[i][j] = false;
                    }
                }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ar[i][j]=='C'){
                bool sol = check(ar,n,m,i,j,str.substr(1),visited,x,y);
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