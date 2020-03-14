#include<bits/stdc++.h>
using namespace std;
void func(long long n){
    long long final_sum =0 ;
    for(long long i=1;i<n;i++){
        final_sum+=(i*n)/(__gcd(i,n));
    }
    final_sum+=n;
    cout<<final_sum<<endl;
}
int main()
{ 
    long long n;
    scanf ( "%lld", &n );
	func(n);
    return 0;
}
