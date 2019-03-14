#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int num, points, total;
  cin >> num;

  points = pow(2,num)+1;
  total = points * points;

  cout << total;

}