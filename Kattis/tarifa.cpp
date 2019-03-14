#include <iostream>
using namespace std;

int main(){

  long mblimit;
  long months;
  long mbused;
  long output = 0;

  cin >> mblimit;
  cin >> months;

  while (cin >> mbused){
    output += (mblimit - mbused);
  }

  output += mblimit;

  cout << output;

}