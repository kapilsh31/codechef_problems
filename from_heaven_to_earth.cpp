#include <iostream>
using namespace std;

void check(int n, int v1, int v2){
    float s,e;
    s=(n*1.414)/float(v1);
    e=((2*n)/float(v2));
    if(s>e)
    cout<<"Elevator"<<endl;
    else
    cout<<"Stairs"<<endl;
}

int main() {
	// your code goes here
	int t,n,v1,v2;
	cin>>t;
	while(t--){
	    cin>>n>>v1>>v2;
	    check(n,v1,v2);
	}
	return 0;
}
