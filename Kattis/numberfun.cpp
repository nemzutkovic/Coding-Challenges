#include <iostream>

int main(){

  int cases, x, y, z;
  std::cin >> cases;

  while (std::cin >> x >> y >> z) {
    if (x + y == z) std::cout << "Possible" << std::endl;
    else if (x - y == z) std::cout << "Possible" << std::endl;
    else if (y - x == z) std::cout << "Possible" << std::endl;
    else if (x * y == z) std::cout << "Possible" << std::endl;
    else if (x * z == y) std::cout << "Possible" << std::endl;
    else if (y * z == x) std::cout << "Possible" << std::endl;
    else std::cout << "Impossible" << std::endl;
  }

  return 0;
}