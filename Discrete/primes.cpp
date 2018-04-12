// Nicholas Dos Santos
// 1/24/2018
#include <iostream>
#include <math.h>
using namespace std;

bool checkPrimes(int num);

int main()
{
	bool prime;
	bool notDone = true;
	int n;
	char keep_going = 'y';

	while (keep_going == 'y')
	{
		cout << "How many primes do you want to list? ";
		cin >> n;

		int counter=0;
		int num = 2;
		while (counter < n){
			if (checkPrimes(num)){
				cout << num <<endl;
				counter++;
			}
			num++;
		}
	}

	return 0;
}

bool checkPrimes(int num){
	int counter = 0;
	bool prime = true;
	int root = (sqrt(num));

	if(num != 2 && num % 2 == 0){
		prime = false;
		counter = counter +1;
	}
	else
	{
		for(int i = 3; i < num; i = i +2 ){
			if(i <= root){
				if(num % i == 0)
				{
					prime = false;
				}
				counter = counter +1;
				}
		}
	}
	return prime;
}
