#include <iostream>
#include <string>
using namespace std;

int main(){

  int periods;
  float quality, years;
  float qaly = 0;

  cin >> periods;

  while (cin >> quality >> years){
    qaly += years*quality;
  }

  cout << qaly;

}