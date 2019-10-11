#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
//#include<stdio>
#include<cstring>
using namespace std;
int main(void)
 
 {
 
 
  char ar[100000];
  int t;
  cin>>t;
  while(t!=0)
   { 
      scanf("%s",ar);
      int len=strlen(ar);
     int flag=0,temp_in;
    
       for(int i=0;ar[i]!='\0';i++)
        {
          if(ar[i]=='1')
          {
            ar[i]='a';
            if(i>0)
            {
                if(ar[i-1]=='0' && ar[i-1]!='a')
               {
                 ar[i-1]='1';
                  temp_in=i-1;
                }
                else if(ar[i-1]=='1' && ar[i-1]!='a')
                {
                 ar[i-1]='0';
                  temp_in=i-1;
                }
                //temp_in=i-1;
                
             }
             if(i<len-1)
            {
                
                if(ar[i+1]=='0' && ar[i+1]!='a')
               {
                 ar[i+1]='1';
                }
                else if(ar[i+1]=='1'  && ar[i+1]!='a')
                {
                 ar[i+1]='0';
                }
                
              }
              
              if(i!=0)
              { i=temp_in-1;
             }
                
                
            } // end of initial if.
         } // end of for-loop
         for(int i=0;ar[i]!='\0';i++)
          {
           if(ar[i]=='0')
           {
            cout<<"LOSE"<<endl;
            flag=1;
            break;
           }
          }
           
           if(flag!=1)
           {
            cout<<"WIN"<<endl;
           }
           
           
           t--;
       }//end of while-loop. 
            
          
            
          
       
 }
    
   
   
   
