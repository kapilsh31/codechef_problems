#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n], b[n],s=0,s_r=0;
	    for(int i=0;i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n; i++){
	        cin>>b[i];
	    }
	    
	    for(int i=0;i<n; i++){
	        s_r=a[i]*20-b[i]*10;
	        s=max(s_r,s);
	    }
	    cout<<s<<endl;
	}
	return 0;
}
