#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int *ar1 = new int[n];
    int *ar2 = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }
    int q;
    cin>>q;
    while(q--){
         int l1, h1, l2,h2;
         cin>>l1>>h1>>l2>>h2;   
       
         int j=0;
        set<int>  st ,st2 ,st3;

         for(int i=0;i<n;i++){
             if(i<l1-1 || i>h1-1){
                st3.insert(ar1[i]);
                
             }
             else{
                 st.insert(ar1[i]);
             }
         }
     
         for(int i=0;i<n;i++){
             if(i<l2-1 || i>h2-1){
                     st3.insert(ar2[i]);
             }
             else{
                 st.insert(ar2[i]);
             }
         }
       
         int size=st3.size();
         auto itr = st3.begin();
         for(;itr!=st3.end();itr++){
             if(st.find(*itr)==st.end()){
                 st2.insert(*itr);
             }
        }
    //    for(int i=0;i<size;i++){
    //        if(st.find(st3)==st.end()){
    //            st2.insert(res[i]);
    //        }
    //    }
    //    for(auto x: st2){
    //        cout<<x<< " ";
    //    }
       
       cout<<st2.size()<<endl;


    } // end of while
}