#include <iostream>
using namespace std;

int yourNum;

int factorial(int num){
	int curVal = num;

	for(int i=num-1;i>0;i--){
		curVal*=i;
	}
	return curVal;	
}

int main(){
	cout << "Enter a number: ";
	cin >> yourNum;
	cout << factorial(yourNum) << "\n";

}
