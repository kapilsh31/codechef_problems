#include <bits/stdc++.h>
using namespace std;

int find(int n){
    int c=0,a;
    while(n!=0){
    a=sqrt(n);
    c+=1;
    n=n-(a*a); 
    }
    return c;
    
}

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<find(n)<<endl;
	}
	return 0;
}
