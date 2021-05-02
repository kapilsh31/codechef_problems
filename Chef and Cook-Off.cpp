#include <iostream>
using namespace std;

void find(int a[]){
    int c=0;
    string s[6]={"Beginner", "Junior Developer","Middle Developer", "Senior Developer","Hacker","Jeff Dean"};
    for(int i=0;i<5;i++){
        if(a[i]==1){
            c+=1;
        }
    }
    
    cout<<s[c]<<endl;
}

int main() {
	// your code goes here
	int a[5],n;
	cin>>n;
	while(n--){
	    for(int i=0;i<5;i++){
	        cin>>a[i];
	    }
	    
	    find(a);
	}
	return 0;
}
