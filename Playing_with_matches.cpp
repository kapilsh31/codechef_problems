#include <iostream>
using namespace std;

int find(int n){
    int r, s=0;
    int a[10]={6,2,5,5,4,5,6,3,7,6};
	while(n != 0){
	    r=n%10;
	    n=n/10;
	    s=s+a[r];
	}
	
	return s;
}
	

int main() {
	// your code goes here
	int t, a, b, n;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    n=a+b;
	    cout<<find(n)<<endl;
	}
	return 0;
}
