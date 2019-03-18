#include <iostream>
#include <string>

int main(){

  std::string case1, case2;
  int cases, i;
  std::cin >> cases;

  while (std::cin >> case1 >> case2){
    std::cout << case1 << std::endl;
    std::cout << case2 << std::endl;
    for (i = 0; i < case1.length(); i++){
      if (case1[i] == case2[i])
        std::cout << ".";
      else
        std::cout << "*";
    }
    std::cout << "\n\n";
  }

  return 0;
}