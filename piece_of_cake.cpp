#include <iostream>
using namespace std;

void check(string s){
        int  n=s.length();
	    int max=0;
	    int a[26]={0};
	    
	    if(n%2 != 0)
	    cout<<"NO"<<endl;
	    else{
	        for(int i=0; i<n; i++){
	            if(s[i] >= 'a' and s[i] <='z')  
	            a[s[i]-'a']++;
	            else  if(s[i] >= 'A' and s[i] <='Z')  
	            a[s[i]-'A']++;
	        }
	        
	        for(int i=0; i<26 ; i++){
	        if(max<a[i]){
	            max=a[i];
	        }
	            
	        }
	    
	         if(max==n/2)
	         cout<<"YES"<<endl;
	         else
	         cout<<"NO"<<endl;
	    }
}

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    check(s);

	 }
	return 0;
}
