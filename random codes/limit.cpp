#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
  string s = "ashish";
  string p = "hisha";
  if(s.find(p)!=string::npos){
      cout<<"pattern found at index "<<(s.find(p))<<"\n"<<string::npos;
  }else{
      cout<<"NOT Found "<<string::npos<<endl;
  }
  return 0;
}