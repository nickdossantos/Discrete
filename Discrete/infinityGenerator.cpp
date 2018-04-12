// Nick Dos Santos
// Feb, 28th 2018
#include <iostream>
using namespace std;

void print(int n, int d);

int main(){
  int x;
  cout<< "Please enter a value for x"<<endl;
  cin >> x;
  int d = 1;
  int n = 1;
  int counter = 0;
  counter ++;
  print(n,d);

  while(counter < x){
    if(d == 1){
      n = n +1;
      counter++;
      print(n,d);
      // go up
      int temp = n;
      for(int i = 0; i < temp -1 && counter < x; i++){
        n = n -1;
        d = d +1;
        counter ++;
        print(n,d);
      }
    }else if(n == 1){
      d = d +1;
      counter ++;
      print(n,d);
      // go down
      int temp = d;
      for(int i = 0; i < temp -1 && counter < x; i++){
        n = n +1;
        d = d -1;
        counter ++;
        print(n,d);
      }
    }
  }
}

void print(int n, int d){
  cout << n << "/" << d <<endl;
}
