#include <iostream>

int main(){

  int days, spacejunk, junkamount = 1000000000, junkday = 0, i = 0;
  std::cin >> days;

  while (std::cin >> spacejunk) {
    if (spacejunk < junkamount) {
      junkamount = spacejunk;
      junkday = i;
    }
    i++;
  }

  std::cout << junkday;

  return 0;
}