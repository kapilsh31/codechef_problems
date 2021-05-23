#include <iostream>
using namespace std;

void find_seat(int n){
    string c[8]={"LB","MB","UB","LB","MB","UB","SL","SU"};
    
    int x=n%8;
    
    if(x>=1 and x < 4){
        n+=3;
        cout<<n<<c[x-1]<<endl;
    }
    else if(x>=4 and x<7){
        n-=3;
        cout<<n<<c[x-1]<<endl;
    }
    else if(x==7){
        n+=1;
        cout<<n<<c[7]<<endl;
    }
    else{
        n-=1;
        cout<<n<<c[6]<<endl;
    }
    
    
 }

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    find_seat(n);
	}
	return 0;
}
