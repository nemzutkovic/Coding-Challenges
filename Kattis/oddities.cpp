#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int testcases, temp;
  cin >> testcases;

  while (testcases != 0){

    cin >> temp;

    if (abs(temp) % 2 == 0)
      cout << temp << " is even" << endl;
    else
      cout << temp << " is odd" << endl;

    testcases--;
  }

}