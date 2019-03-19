#include <iostream>

int main(){

  int s, i, j = 1, temp = 0;
  std::cin >> s;
  std::cout << s << ":" << std::endl;

  for (i = 2; i < s; i++){
    while (temp < s){
      temp = i*j + (i-1)*(j);
      if (temp == s) std::cout << i << "," << i-1 << std::endl;
      temp = i*(j+1) + (i-1)*(j);
      if (temp == s) std::cout << i << "," << i-1 << std::endl;
      j++;
    }
    if (s % i == 0) std::cout << i << "," << i << std::endl;
    j = 1;
    temp = 0;
  }

  return 0;
}