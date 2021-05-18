#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c== 'o' || c == 'u'){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        for(int i =0 ; i<n; i++){
            cin>>s[i];
        }
        
        if(n==1){
            cout<<"0"<<endl;
        }
        else{
        int c=0;
        for(int i=0; i<n-1; i++){
            if (isvowel(s[i]) == false and isvowel(s[i + 1]) == true){
                c++;
            }
            
        }
        cout<<c<<endl;
    }
       
    }
}
