#include <iostream>

using namespace std;

int main(){
	// program prints out all 3 digit passwords of numbers 0-9 
	int counter = 0;
	for(int num1 = 0; num1 <= 9; num1++){
		counter = counter +1;
		for (int num2 = num1 +1; num2 <=9; num2++){
			counter = counter +1;
			for(int num3 = num2 +1; num3 <=9; num3++){
				counter = counter +1;
					// cout<<counter<< "This is counter"<<endl;
				if(num1 != num2 && num1 != num3 && num2 != num3){
					cout<< num1 <<num2 << num3 <<endl;
				}
			}
		}
	}

	return 0;
}
