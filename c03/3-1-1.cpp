#include <iostream>
using namespace std;

int main(){
	int i, n1, n2;

	cout << "Enter a number and press ENTER: ";
	cin >> n1;

	cout << "Enter a higher number and press ENTER: ";
	cin >> n2;

	for(i=n1;i<=n2;i++){
		cout << i << "\n";
	}
	return 0;
}
