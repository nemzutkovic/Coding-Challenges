#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

  int r;
  std::cin >> r;
  int taxidiamet   = (r*2);
  int taxicircum   = taxidiamet*4;
  double taxicpi   = taxicircum / taxidiamet;
  double euclidian = M_PI*(r*r);
  double taxicab   = taxicpi*(r*r) / 2;
  
  std::cout << std::fixed << std::setprecision(6) << euclidian << std::endl;
  std::cout << std::fixed << std::setprecision(6) << taxicab << std::endl; 

  return 0;
}