#include <iostream>

int main(){

  int x, y;
  std::cin >> x >> y;

  if (y % 2 != 0) std::cout << "impossible";
  else std::cout << "possible";

  return 0;
}