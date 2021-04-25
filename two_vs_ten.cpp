#include<iostream>
using namespace std;

int count(int x){
    int c=0;
    if (x % 10 ==0){
        return c;
    }
    
    else if(x%10==5){
        x *= 2;
        c++;
        return c;
    }
    
    else{
        return -1;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long  x;
	    cin>>x;
	    cout<<count(x)<<endl;
	}
	return 0;
}
