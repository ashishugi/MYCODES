#include<iostream>
#include<set>
using namespace std;
int main(void) {
  int n;
  int arr[100];
   //set<int> st;
    cin>>n;
   for(int i=0;i<n;i++) { 
    cin>>arr[i];
    }
    
     
    set<int> st;
    
    for(int i=0;i<n;i++){
        if(st.find(arr[i])!=st.end()){
            cout<<arr[i]<<" ";
            
            
        }
        else{
         st.insert(arr[i]);
      }
            
    }
 
}
    
    
    
  
