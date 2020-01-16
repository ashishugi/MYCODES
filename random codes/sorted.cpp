#include<iostream>
using namespace std;
bool sorted(int ar[],int size) {
   if(size==1 || size==0) {
    return true;
    }
    if(ar[0]>ar[1]) {
     return false ;
     }
     bool x = sorted(ar+1,size-1);
     return x;
   }
   
 int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    
   if(size==0){
       return -1;
   }
   if(input[0]==x){
//  cout<<"inside => "<<size<<endl;
       return 0;
   }
    
          int ans  = firstIndex(input+1,size-1,x);
          if(ans!=-1){
          
          return ans+1;
          }
          else
          {
          return -1;
          }
        
    
}
  
 int main(void){ 
   int size;
   cout<<"enter the size"<<endl;
   cin>>size;
   int *ar=new int[size];
   cout<<"\n enter the array "<<endl;
   for(int i=0;i<size;i++){
    cin>>ar[i];
    }
    int x;
    cout<<"enter the number to be searched"<<endl;
    cin>>x;
    int  ans  = firstIndex(ar,size,x);
    cout<<ans<<endl;
}
