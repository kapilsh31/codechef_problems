#include <iostream>
using namespace std;

int Max(int s, int a){
   
   return ((s / a) - 1) * (s / a) / 2;
}

int main() {
	// your code goes here
	int t,s,a=2;
	cin>>t;
	while(t--){
	    cin>>s;
	    std::cout << Max(s,a) << std::endl;
	}
	return 0;
}
