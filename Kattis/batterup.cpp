#include <iostream>

int main(){

  int bats, outcome, temp = 0;
  float percentage;
  std::cin >> bats;

  while (std::cin >> outcome){
    if (outcome == -1) bats--;
    else temp += outcome;
  }

  percentage = (float) temp / bats;

  std::cout << percentage;

  return 0;
}