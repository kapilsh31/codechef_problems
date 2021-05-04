#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,b,w,h,p;
	cin>>t;
	while(t--){
	    cin>>n>>b;
	    int a[n]={0},m=0;
	    for(int i=0;i<n;i++){
	        cin>>w>>h>>p;
	        if(p<=b){
	            a[i]=w*h;
	        }
            else{
                a[i]=0;
            }
	    }
	    for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
	        if(a[i]>m){
	            m=a[i];
	        }
	    }
	    
	    if(m==0)
	    cout<<"no tablet"<<endl;
	    else
	    cout<<m<<endl;
	    }
	
	
	return 0;
}
