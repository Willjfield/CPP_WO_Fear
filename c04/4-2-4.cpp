#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main(){
	int i;

	cout << "Enter a number: ";
	cin >> i;

	while(true){
			if(prime(i)){
				cout << i << " is prime " << endl;
				return 0;
			}else{
				i++;
			}
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
