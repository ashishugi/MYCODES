/**********************Finding the next prime number to a given prime number**************************/
#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0
 int fun(int n,int flag)
{
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			return 1;
		}
	}
	return 0;
}
 int main()
 {
 	int t,n,j,flag=0;
 	cin>>n;
 	if(n!=1)
 	{
 		
 	
   	for(int i=2;i<=(n/2);i++)
 	  {
 		if(n%i==0)
 		{
 			flag=1;
 			break;
 		}
 	  }
 	}
 	else
 	{
 		cout<<"not prime\n";
 		flag=1;
 	}
 	if(flag==0)
 	{
 		cout<<"the no entered is prime\n";
 	}
 	else
 	{
 		cout<<"the no. you entered is not prime\n";
 		while(flag!=0)
 		{
 			n=n+1;
 			flag=fun(n,flag);
 		}
 		cout<<"\nthe next prime is :"<<n;
 	}
 	
 }
