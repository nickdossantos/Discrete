// Nick Dos Santos
// triangle Problem
#include <iostream>
#include <math.h>

using namespace std;

void printList(int array[], int size);

int main(){
  // print array of size 1
  // add 1 to the size of the array
  // first and last terms are always 1
  // add slot x + slot y. then put in newArray[z]
  cout << "When do you want the tree to stop?"<<endl;
  int n;
  cin >> n;
  int firstArray[n];
  int newArray[n];
  cout << "1"<<endl;
  for(int i = 2; i <= n; i++) // iterate until you reach n iterations
  {
      for(int x = 0; x < i;x++) //add to newArrays list
      {
        if(x == 0){
          newArray[x] = 1;
        }else if(x == i - 1){
          newArray[x] = 1;
        }else{
          newArray[x] = firstArray[x] + firstArray[x - 1];
        }
      }
      printList(newArray, i);
      cout<< " "<<endl;
      for(int y = 0; y < i; y++){
        firstArray[y] = newArray[y];
      }
  }

  return 0;
}

void printList(int array[], int size){
  for(int i = 0; i < size; i++){
    cout << array[i] << " ";
  }

}
