#include <iostream>
using namespace std;

int main(){
	int i, n;

	cout << "Enter first number and press ENTER: \n";
	cin >> i;

	cout << "Enter second (HIGHER!) number and press ENTER: \n";
	cin >> n;


	while (n>=i){
		cout << n << " ";
		n--;
	}
	return 0;
}
