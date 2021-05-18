#include <iostream>
using namespace std;

void find(string s){
    int s1=0,s0=0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='1'){
            s1+=1;
        }
        else{
            s0+=1;
        }
    }
    
    if(s1==s0==10){
        cout<<"WIN"<<endl;
    }
    else if(s1>s0){
        cout<<"WIN"<<endl;
    }
    else{
        cout<<"LOSE"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    find(s);
	}
	return 0;
}
