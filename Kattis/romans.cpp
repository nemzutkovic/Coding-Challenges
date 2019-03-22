#include <iostream>

int main(){

  double miles;
  std::cin >> miles;
  double answer = miles*1000.0*(5280.0/4854.0) + 0.5;
  
  std::cout << (int) answer << std::endl;

  return 0;
}