#include <iostream>
using namespace std;

int sum(int n){
    int s=0,r;
    while(n!=0){
        r=n%10;
        n=n/10;
        s += r;
        
    }
    
    return s;
}

int main() {
	int n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<sum(n)<<'\n';
	}
	return 0;
}
