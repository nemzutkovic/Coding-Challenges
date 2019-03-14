#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

int main(){

  int opp, angle, length;

  cin >> opp >> angle;

  length = opp / sin(angle*PI/180) + 1;

  cout << length;

}