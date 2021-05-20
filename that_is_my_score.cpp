#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t,n;
	cin>>t;
	while(t--){
	    int sum=0;
	    int h[11]={0};
	    cin>>n;
	    int pi,si;
	    for(int i=0; i<n; ++i){
	        cin>>pi>>si;
	        if(h[pi]==0){
	            h[pi]=si;
	        }
	        else{
	            if(h[pi]<si){
	                h[pi]=si;
	            }
	            else{
	                h[pi]=h[pi];
	            }
	        }
	    }
	    
	    for(int i=0 ; i<9; i++){
	        sum+=h[i];
	    }
	    
	    cout<<sum<<endl;
	}
	
	return 0;
}
