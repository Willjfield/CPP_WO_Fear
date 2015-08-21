#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n=0;
	bool is_prime = true;

	cout << "Enter a number: ";
	cin >> n;
	
	double sqN = sqrt(n);
	for(int i=2;i<=sqN; i++){
		if(n%i==0){
			is_prime = false;
			break;
		}
	}

	if(is_prime){
		cout << "Number is prime." << endl;
	}else{
		cout << "Number is not prime." << endl;
	}

	return 0;
}
