#include <iostream>
using namespace std;

int main (void) {

  float x=0;
  cin >> x;
  int y = (int) x;

  if (x-y !=0)
    cout <<"Nonint";

  else{
  if(y%2 == 0)
    cout <<"Even";
  else
    cout <<"Odd";
  }

    return 0;
}

