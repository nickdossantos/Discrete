#include <iostream>

using namespace std;

int main(){

  int n;
  cout <<"Enter a spot to stop the sequence: "<<endl;
  cin >> n;

  int prevNum = 0;
  int curNum = 1;
  cout << curNum << " ";
  for(int i = 0; i <=n -1; i++)
  {
    cout<< curNum + prevNum << " ";
    int temp = curNum;
    curNum = curNum + prevNum;
    prevNum = temp;
  }


  return 0;
}
