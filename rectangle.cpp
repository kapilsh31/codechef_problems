#include <bits/stdc++.h>
using namespace std;

void check(int a[], int n){
    sort(a,a+n);
    int f=0;
    for(int i=0;i<n;i+=2){
	        if(a[i]==a[i+1]){
	            f++;
	        }
	        else{
	            f--;
	        }
	 }
	 
	 if(f==2)
	 cout<<"YES"<<endl;
	 else
	 cout<<"NO"<<endl;
}


int main() {
	// your code goes here
	int t,n=4;
	int a[n];
	cin>>t;
	while(t--){
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    check(a, n);
	   
	    }

	return 0;
}
