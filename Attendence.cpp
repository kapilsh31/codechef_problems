#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string f_name[n] , l_name[n];
	    for(int i=0;i<n;i++){
	        cin>>f_name[i]>>l_name[i];
	    }
	    int a[n]={0};
	    for(int i=0;i<n;++i){
	        for(int j=0;j<n;++j){
	            if((f_name[i].compare(f_name[j])==0) and (i != j)){
	                a[i]=1;
	            }
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        if(a[i]==1){
	            cout<<f_name[i]<<" "<<l_name[i]<<endl;
	        }
	        else{
	            cout<<f_name[i]<<endl;
	        }
	    }
	}
	return 0;
}
