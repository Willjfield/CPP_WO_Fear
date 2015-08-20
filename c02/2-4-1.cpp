#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, i;
	int is_prime = true;

	cout << "Enter a number and press ENTER: ";
	cin >> n;

	i=2;
	double sqN = sqrt(n);

	while(i<=sqN){
		if(n%i == 0){
			is_prime = false;
		}
		i++;
	}
	
	if(is_prime){
		cout << "Number is prime." << endl;
	}else{
		cout << "Number is not prime." << endl;
	}
	cout << "\n";
	return 0;
}
