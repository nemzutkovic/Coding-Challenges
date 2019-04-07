#include <iostream>

int main(){

  int n;
  std::cin >> n;
  std::string number = "";
  std::cin.ignore();
  while (n != 0){
    getline(std::cin,number);
    std::cout << number.length() << std::endl;
    --n;
  }

  return 0;
}