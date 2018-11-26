#include <iostream>
using namespace std;

int main () {
	int T;
	cin>>T;
	
	string words[] = {"one", "two", "three"} , input;
	
	for (int i = 0; i<T; i++) {
		short int score[3] = {0, 0, 0};
		cin>>input;
		
		int limit = (input.length() > 3)? 3 : 2;
		int start = (input.length() > 3)? 2 : 0;
		
		for (int j = 0; j<input.length(); j++) {
			for(int k = start; k<limit; k++){
				if(input[j] == words[k][j]){
					score[k]++;
				}
			}
		}
		
		for (int j = 0; j<3; j++){
			if(score[j] > 1){
				cout<<j+1<<endl;
				break;
			}
		}
	}
	
	return 0;
}
