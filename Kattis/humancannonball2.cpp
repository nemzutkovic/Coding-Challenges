#include <iostream>
#include <cmath>

#define PI 3.14159265
#define GRAVITY 9.81

int main(){

  float cases, v, angle, x, h1, h2, t, y;
  std::cin >> cases;

  while (std::cin >> v >> angle >> x >> h1 >> h2){
    t = (x / v) / cos(angle*PI/180);
    y = (v * t * sin(angle*PI/180)) - (0.5 * GRAVITY * pow(t,2));
    if (y > h1 + 1 && y < h2 - 1) std::cout << "Safe" << std::endl;
    else std::cout << "Not Safe" << std::endl;
  }

  return 0;
}