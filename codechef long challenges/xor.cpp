#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	int t;
	cin >> t;
	while(t--){
	int n , k;
	cin >> n;
	cin >> k;
	int ar[n];
	for(int i=0;i<=k-1;i++){
	cin >>ar[i];
	}
	for(int i=0;i<n;i++)
	{
	int a = ar[(i%n)];
	int b = ar[(n-(i%n)-i)];
	ar[(i%n)] = (a^b);
	}	
	for(int i=0;i<n;i++){
	cout<<ar[i]<<" ";
	}
	
	}
}
	
	