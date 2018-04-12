// Nicholas Dos Santos
// February 2018

#include <iostream>
using namespace std;

void print (int array[], int r);	// prints the r-subset
int combination (int n, int r);		// computes C(n,r)
int factorial(int x);

int main()
{
	int n, r;

	cout << "Enter a value for n: ";
	cin >> n;
	cout << "Enter a value for r: ";
	cin >> r;

	int array[r];			// this will hold your r-subsets
	int difference = n-r;	// this quantity is REALLY useful...

	cout << "There are " << combination(n,r);
	cout << " r-subsets, and here they are:\n";

	// Fills the array with {0, 1, 2...r-1}, the smallest r-subset
	for(int i = 0; i < r; i++)
	{
		array[i] = i;
	}

	print (array, r);

	while (array[0] != n-r)	// Think about when to STOP this
	{
		for(int x = r-1; x >= 0; x--)   // Start on the right, and scroll left
		{
			// YOUR CODE GOES HERE TO FIND THE NEXT R-SUBSET
			int incVal = 1;
			if(array[x] < n-r + x){ //is less than thats slots max value
				array[x] = array[x] +1; // add 1 to that slot
				for(int z = x +1; z <= r-1; z++){ //for each number after the pivot
					array[z] = array[x]+ incVal; //each spot is 1 more than its previous
					incVal++; //increase incVal bc we need to add the increment to the next number
				}
				break;
			}

		}
		print (array, r);	// print the r-subset you just found
	}
	return 0;
}

void print (int array[], int r)
{
	for(int i = 0; i < r; i++)
	{
		cout << array[i] << '\t';
	}
	cout << endl;
}

int combination (int n, int r)
{
	return factorial(n)/(factorial(r)*(factorial(n-r)));
}

int factorial(int x){
	int finalNum = 1;
	int difference ;
	for(int i = 0; i < x; i++){
		difference = x-i;
		finalNum = finalNum * difference;
	}
	return finalNum;
}
