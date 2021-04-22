#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	float salary, base, da, hra;
	cin>>base;
	if(base<1500){
	    hra=base/10;
	    da=base*0.9;
	    salary=base+da+hra;
	    cout<<fixed<<setprecision(2)<<salary<<endl;
	}
	else{
	    hra=500;
	    da=base*0.98;
	    salary=base+da+hra;
	    cout<<fixed<<setprecision(2)<<salary<<endl;
	}
	
    }
	return 0;
}
