#include<bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(int i=0; i<n; ++i){
	        cin>>a[i];
	    }
	    
	    double ans=0.000000,sum=0.00,avg=0.00;
        sort(a,a+n);
        for(int i=0;i<k;i++){
           a[i]=0;
           a[n-1-i]=0;
        }
    
        for(int i=0;i<n;i++){
           sum=sum+a[i];
        }
        
        n=n-2*k;
        avg=sum/n;
        
	    
	    cout<<fixed<<setprecision(6)<<avg<<endl;
	}
	return 0;
}
