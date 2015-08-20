#include <iostream>

using namespace std;

int main(){
	int total, n;
	int subLimit;

	while(true){
		cout << "Welcome to NIM. Pick a starting total: ";	
		cin >> total;
			if(total>0){
				break;
			}
	}

	while(true){
		cout << "Pick largest number allowed to be subtracted. Must be greater than zero and less than starting total." << endl;
		cin >> subLimit;
			if(subLimit>0 && subLimit < total){
			break;
			}
	}

	while(true){
		if(total%subLimit!=0){
			total = total-(total%subLimit);
			cout << "I am subtracting " << subLimit <<  endl;
		}else{
			total-=1;
			cout << "I am subtracting 1." << endl;
		}
		cout << "New total is " << total <<  endl;
		if (total == 0){
			cout << "I win!" << endl;
			break;
		}

		cout << "Enter number to subtract (less than " << subLimit << "): ";
		cin >> n;
		while(n<1 || n > subLimit){
			cout << "Input must be in range." << endl;
			cout << "Re-enter: ";
			cin >> n;
		}
		total = total-n;
		cout << "New total is " << total << endl;
		if (total<=0){
			cout << "You win!" << endl;
			break;
		}
	}
	return 0;
}
