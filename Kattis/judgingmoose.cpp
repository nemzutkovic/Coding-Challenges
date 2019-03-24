#include <iostream>

int main(){

  int left, right;
  std::cin >> left >> right;

  if (left == 0 && right == 0) std::cout << "Not a moose" << std::endl;
  else if (left == right) std::cout << "Even " << left+right << std::endl;
  else std::cout << "Odd " << (std::max(left,right))*2 << std::endl;

  return 0;
}