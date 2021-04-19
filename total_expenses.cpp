#include <bits/stdc++.h>
using namespace std;

void price(double a, double b){
    if(a>1000){
        b=0.9*b;
        cout<<fixed<<setprecision(6)<<(a*b)<<endl;
    }
    else{
        cout<<fixed<<setprecision(6)<<(a*b)<<endl;
    }
}

int main() {
	// your code goes 
	int t;
    double a,b;
	std::cin >> t;
	while(t--){
	    cin>>a>>b;
	     price(a,b); 
	     cout<<endl;
	}
	return 0;
}
