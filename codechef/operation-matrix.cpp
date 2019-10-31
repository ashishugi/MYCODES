    #include<iostream>
    #include<vector>
    #include<bits/stdc++.h>
    using namespace std;
    int main(void){
        int t;
        cin >> t;
        while (t--)
        {
            int n ,m ,q;
            cin >> n;
            cin>> m;
            cin >> q;
        
            int **v = new int*[n];
            for(int i=1;i<=n;i++){
                v[i]=new int[m];
                for(int j=1;j<=m;j++){
                    v[i][j]=0;
                }
            }
            int count_odd=0;
            
            while(q--){

                int row , col;
                cin >> row; 
                cin>> col;
                
                for(int i=1;i<=n;i++){
                    v[row][i]++;
                }
                for(int i=1;i<=m;i++){
                    v[i][col]++;
                }
                
            
                

            } // end of inner while
            for(int i=1;i<=n;i++){
                    for(int j=1;j<=m;j++){
                        
                        if(((v[i][j]) % 2) != 0){

                            count_odd++;
                        
                        
                        }
                    
                    }
        

            }
                cout<<count_odd<<endl;
        
    } // end of outer while
    }