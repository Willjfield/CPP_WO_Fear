#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main(){

	while(true){
		for(int i=2;i<=20;i++){
			if(prime(i)){
				cout << i << " is prime " << endl;
			}else{
				cout << i << " is not prime " << endl;

			}
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
