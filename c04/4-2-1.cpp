#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main(){
	int i;

	while(true){
		cout << "Enter a number and press ENTER: ";
		cin >> i;
		if(i==0){
			break;
		}
		if(prime(i)){
			cout << i << " is prime " << endl;
		}else{
			cout << i << " is not prime " << endl;

		}
		return 0;
	}
}

bool prime(int n){
	double sqn = sqrt(n);
	for(int i=2; i<=sqn;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
