#include <iostream>
using namespace std;

int main(){
	int i, n;

	cout << "Enter first number and press ENTER: \n";
	cin >> i;

	cout << "Enter second (HIGHER!) number and press ENTER: \n";
	cin >> n;


	while (i<=n){
		if(i%2==0){
		cout << i << " ";
		}
		i++;
	}
	cout << "\n";
	return 0;
}
