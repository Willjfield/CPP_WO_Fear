#include <iostream>
using namespace std;

int main(){
	int i, n;

	cout << "Enter number and press ENTER: \n";
	cin >> i;
	
	if(i>=0 && i<=100){
		cout << "Your number is between 0 and 100";
	}else{
		cout << "Your number is out of range";
	}
	cout << "\n";
	return 0;
}
