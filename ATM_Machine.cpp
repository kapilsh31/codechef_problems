#include <iostream>
using namespace std;

void check(int a[], int n, int k){
   
    int i=0;
    while(i<n){
        if(a[i]<=k){
            k=k-a[i];
            cout<<1;
        }
        else {
            cout<<0;
        }
        
        i++;
    }
}

int main() {
	// your code goes here
	int t, n, k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    check(a,n,k);
	    cout<<endl;
	   
	}
	
}
