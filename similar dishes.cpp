#include<iostream>
using namespace std;

void solve(){
   string arr[4];
   string arr2[4];
   for(int i=0;i<4;i++){
       cin>>arr[i];
   }
   for(int i=0;i<4;i++){
       cin>>arr2[i];
   }
   int count=0;
   for(int i=0;i<4;i++){
     for(int j=0;j<4;j++){
         if(arr[i]==arr2[j]){
             count++;
         }
     }
   }
     if(count>=2){
         cout<<"similar"<<endl;
     }else{
         cout<<"dissimilar"<<endl;
     }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	    
	}
	return 0;
}
