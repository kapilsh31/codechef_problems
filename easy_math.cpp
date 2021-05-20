#include <bits/stdc++.h>
using namespace std;

int sum(int m){
    int s=0;
    while(m!=0){
        int r=m % 10;
        m=m/10;
        s+=r;
    }
    return s;
}

int find(int a[], int n){
    
    if(n==2){
        return sum(a[0]*a[1]);
    }
    
    else{
        int s=0;
        for(int i=0; i<n; i++){
        int m_r=1, s_r=0;
        for(int j=0; j<n; j++){
            if(i!=j){
            m_r=a[i]*a[j];
            s_r=sum(m_r);
            s=max(s_r,s);
            }
        }
    }
    
    return s;
    
        
    }
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }
        
        cout<<find(a,n)<<endl;
        
        
    }
    

}
