#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int numoflawns;
  double costofseed, width, length;
  double sowall = 0;

  cin >> costofseed >> numoflawns;

  while (cin >> width >> length){
    sowall += width*length;
  }

  sowall = sowall*costofseed;

  cout << fixed << setprecision(6) << sowall;

}