#include <iostream>
using namespace std;

int yourNum;

void print_out(int num){
	for(int i=1;i<=num;i++){
		cout << i << endl;
	}	
}
int main(){
	cout << "Enter a number: ";
	cin >> yourNum;
	print_out(yourNum);

}
