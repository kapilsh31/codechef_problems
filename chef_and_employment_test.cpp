#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,k,n;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(int i=0 ; i<n; i++){
	        cin>>a[i];
	    }
	    
	    sort(a,a+n);
	    
	    int b= ((n+k)/2);
	    if(b <= n){
	        cout<<a[b]<<endl;
	    }else{
	        cout<<"9"<<endl;
	    }
	}
	return 0;
}
