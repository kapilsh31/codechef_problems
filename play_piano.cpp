#include <iostream>
using namespace std;

void check(string s, int n){
    int c=1;
    if(n==1)
    c=0;
    
    for(int i=0; i<n; i+=2){
            if(s[i]==s[i+1]){
                c=0;
                break;
            }
        }
        if(c==1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	string s;
	while(t--){
	   cin>>s;
	   int n=s.length();
	   check(s,n);
	   
	    
	}
	return 0;
}
