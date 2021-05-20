#include <bits/stdc++.h>
using namespace std;

void find(string s){
    int n=s.length();
    int flag=0;
    
    if(n<2){
        cout<<"NO"<<endl;
    }
    else{
        char a=s[0];
        char b=s[1];
        for(int i=0; i<n; i++){
            if(i%2==0 and s[i]==a and s[i]!=s[i+1]){
                flag=1;
            }
            
            else if(i%2!=0 and s[i]==b and s[i]!=s[i+1]){
                flag=1;
            }
            
            else{
                flag=0;
                break;
            }
        }
        
        if(flag==0){
        cout<<"NO"<<endl;
        }
        else{
        cout<<"YES"<<endl;
        }
    }
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    for(auto &value:s){
	        value=toupper(value);
	    }
	    find(s);
	}
	return 0;
}
