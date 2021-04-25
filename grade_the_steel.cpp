#include <iostream>
using namespace std;

int grade(long hard, float cc, long tensile){
    if(hard>50 && cc<0.7 && tensile>5600)
    return 10;
    else if(hard>50 and cc<0.7)
    return 9;
    else if(cc<0.7 and tensile>5600)
    return 8;
    else if(hard>50 and  tensile>5600)
    return 7;
    else if(hard>50 or cc<0.7 or tensile>5600)
    return 6;
    else
    return 5;
}

int main() {
	// your code goes here
	int t;
    long hard, tensile;
    float cc;
	cin>>t;
	while(t--){
	    cin>>hard>>cc>>tensile;
	    cout<<grade(hard,cc,tensile)<<endl;
	}
	return 0;
}
