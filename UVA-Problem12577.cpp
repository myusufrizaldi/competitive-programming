#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int i=1;
	string input;
	do{
		cin>>input;
		if(input == "umrah" || input == "Umrah"){
			cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
		}else if(input == "hajj" || input == "Hajj"){
			cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
		}
		
		i++;
	}while(input!="*");
}
