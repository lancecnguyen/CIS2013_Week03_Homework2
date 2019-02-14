#include <iostream>
using namespace std;

int main(){
	cout << "The prime numbers between 3 to 100 are" << endl;
	bool prime = true;
	for (int numb = 3; numb <=100; numb++){
		prime = true;
		for (int divide = 2; divide <= (numb - 1); divide++){
			if ((numb % divide) == 0){
			
				prime = false;
			break;
			}
		}
		if (prime == true)
			cout << numb << "  ";
	}
	
	return 0;
}
