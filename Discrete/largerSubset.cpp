#include <iostream>

using namespace std;

int main(){

  // compare both arrays at the same spot
  // if one has a larger number at that same spot that one is bigger.
  int subset1[3] = {2, 1, 6};
  int subset2[3] = {2, 5, 6};

  cout<<"I am going to tell you which subset is larger."<<endl;

  for(int i = 0; i < 3; i++)
  {
    if(subset1[i]> subset2[i]){
      cout <<"subset1 is larger than 2"<<endl;
      break;
    }else if(subset2[i] > subset1[i]){
      cout <<"subset2 is larger than 1"<<endl;
      break;
    }
  }


  return 0;
}
