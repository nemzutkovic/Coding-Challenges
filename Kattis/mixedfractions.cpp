#include <iostream>

int main(){

  int x, y;

  while (std::cin >> x >> y){
    if (x != 0 || y != 0) std::cout << x / y << " " << x % y << " / " << y << std::endl;
  }

  return 0;
}