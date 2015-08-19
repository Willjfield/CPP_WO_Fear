#include <iostream>
using namespace std;

int main(){
	double ftemp;

	cout << "Input a F temp and press ENTER: ";
	cin >> ftemp;

	cout << "C temp is: " << (ftemp-32)/1.8 << endl;

	return 0;
}
