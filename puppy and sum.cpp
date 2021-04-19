#include <iostream>
using namespace std;

int sum(int d, int n){
    int s=n;
    while(d--){
        s=s*(s+1)/2;
    }
    return s;
    
}

int main() {
	// your code goes here
	int t,d,n;
	std::cin >> t;
	while(t--){
	    cin>>d>>n;
	    std::cout << sum(d,n) <<endl;
	}
	return 0;
}
