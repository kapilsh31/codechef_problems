#include <iostream>
using namespace std;

void pal(int n){
    int m=n;
    int rev=0,r;
    while(n!=0){
        r=n%10;
        rev = rev*10+r;
        n=n/10;
    }
    
    
    if(rev==m) 
    cout<<"wins"<<endl;
    else 
    cout<<"loses"<<endl;
}

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    pal(n);
	}
	return 0;
}
