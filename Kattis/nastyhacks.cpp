#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int cases, r, e, c;

  cin >> cases;

  while (cin >> r >> e >> c){
    if ((e - c) > r)
      cout << "advertise" << endl;
    else if ((e - c) < r)
      cout << "do not advertise" << endl;
    else
      cout << "does not matter" << endl;
  }

}