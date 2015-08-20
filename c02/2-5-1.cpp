#include <iostream>

using namespace std;

int main(){
	int total, n;

	while(true){
	cout << "Welcome to NIM. Pick a starting total: ";	
	cin >> total;
		if(total>0){
			break;
		}
	}

	while(true){
		if((total%3)==2){
			total = total-2;
			cout << "I am subtracting 2." << endl;
		}else{
			total--;
			cout << "I am subtracting 1." << endl;
		}
		cout << "New total is " << total <<  endl;
		if (total ==0){
			cout << "I win!" << endl;
			break;
		}

		cout << "Enter number to subtract (1 or 2): ";
		cin >> n;
		while(n<1 || n >2){
			cout << "Input must be 1 or 2." << endl;
			cout << "Re-enter: ";
			cin >> n;
		}
		total = total-n;
		cout << "New total is " << total << endl;
		if (total==0){
			cout << "You win!" << endl;
			break;
		}
	}
	return 0;
}
