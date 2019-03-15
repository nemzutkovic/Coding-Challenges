#include <iostream>

int main(){

  int num, temp, count = 0;

  std::cin >> num;

  while (num != 0){
    std::cin >> temp;
    if (temp < 0)
      ++count;
    num--;
  }

  std::cout << count;

  return 0;

}