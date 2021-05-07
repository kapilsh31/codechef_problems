#include <bits/stdc++.h>
using namespace std;

void check(int  n, int a[], int b[]){
    sort(a,a+n);
    sort(b,b+n);
    a[n-1]=0;
    b[n-1]=0;
    int c=0,d=0;
    for(int i=0;i<n;i++){
        c+=a[i];
    }
    for(int i=0;i<n;i++){
        d+=b[i];
    }
    if(c<d){
        cout<<"Alice"<<endl;
    }
    else if(d<c){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
}

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n], b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    check(n,a,b);
	}
	return 0;
}
