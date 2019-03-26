#include <iostream>

int main(){

  int harshad, copy, divisor = 0;
  bool found = false;
  std::cin >> harshad;

  while(found != true){
    copy = harshad;
    while(copy != 0){
      divisor += copy % 10;
      copy /= 10;
    }
    if (harshad % divisor == 0) found = true;
    else {
      harshad++;
      divisor = 0;
    }
  }

  std::cout << harshad;

  return 0;
}