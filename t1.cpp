#include <iostream>
using namespace std;
void f1(int a){
	while(a<5){
		
		cout<<a<< " ";
		a++;
		f1(a--);
	}
}
int main() {
	// your code goes here
	f1(2);
	return 0;
}