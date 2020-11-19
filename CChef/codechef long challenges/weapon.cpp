    #include<bits/stdc++.h>
    using namespace std;
    int main(void){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string input[n];
            for(int i=0;i<n;i++){
                cin>>input[i];
            }
            
            for(int i=1;i<n;i++){
                for(int j=0;j<10;j++){
                    input[0][j] = input[0][j] ^ input[i][j] - '0';
                  
                }
                  cout<<input[0]<<endl;
            }
            int count=0;
            for(int i=0;i<10;i++){
                if(input[0][i] == '1'){
                    count++;
                }
            }  
            cout<<count<<endl;       
        } // end of while
    
    }