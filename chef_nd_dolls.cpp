#include <bits/stdc++.h>
using namespace std;

int check(int a[], int n){
    
    for(int i=0 ;i<n-1; i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[j]==a[i]){
                c++;
        }
            }
        if(c%2 !=0)
        {
            return a[i];
            
        }
        
    }

}

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    cout<<check(a,n)<<endl;
	}
	
}
