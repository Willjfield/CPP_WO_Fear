#include <iostream>
using namespace std;

int main(){
	int n;

	cout << "Enter a number and press ENTER: \n";
	cin >> n;

	if(n%7==0){
		cout << "The number is divisible by 7. \n";
	}else{
		cout << "The number is not divisible by 7. \n";
	}

	return 0;
}
