#include<iostream>
using namespace std;
int main(void)
{
    double a=1.0/81;
    double b=0;
   for(int i=0;i<729;i++)
   {
        b+=a;
   }
   cout<<b<<endl;

}