#include <iostream>
using namespace std;

int find_second(int a, int b, int c)                                                             
{                                                                                                                                                                                      
  if (a > b && a < c || a>c && a<b)                                                                             
    {                                                                                               
        return a;                                                                                   
    }                                                                                                                                                                                  
    else if (b > c && b < a || b <c && b>a)                                                                        
    {                                                                                               
        return b;                                                                                   
    }   
    
    else                                                                          
    {                                                                                               
        return c;                                                                                   
    } 

 }                                                                                                   


int main() {
	int t,a,b,c;
	std::cin >> t;
	while(t--){
	    cin>>a>>b>>c;
	    std::cout << find_second(a,b,c) << std::endl;
	}
	return 0;
}
