#include <iostream>
using namespace std;

int main () {
	int T;
	cin>>T;
	
	string command;
	int bank = 0, donate;
	for(int i=0; i<T; i++){
		cin>>command;
		if(command == "donate"){
			cin>>donate;
			bank += donate;
		}else if(command == "report"){
			cout<<bank<<endl;
		}
	}
	
	return 0;
}
