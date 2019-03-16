#include <iostream>

int main(){

  int a, b, newa = 0, newb = 0, answer;

  std::cin >> a >> b;

  while (a > 0 && b > 0){
    newa += a % 10;
    newb += b % 10;
    a = a / 10;
    b = b / 10;
    if (a > 0 && b > 0){
      newa *= 10;
      newb *= 10;
    }
  }

  if (newa > newb) std::cout << newa;
  else std::cout << newb;

  return 0;
}