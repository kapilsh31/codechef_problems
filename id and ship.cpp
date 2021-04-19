#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string ch;
	while(t--){
	    cin>>ch;
	    if(ch=="B" or ch=="b")
	    std::cout << "BattleShip" << std::endl;
	    else if(ch=="C" or ch=="c")
	    std::cout << "Cruiser" << std::endl;
	    else if(ch=="D" or ch=="d")
	    std::cout << "Destroyer" << std::endl;
	    else if(ch=="F" or ch=="f")
	    std::cout << "Frigate" << std::endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
