#include <iostream>
#include <cmath>

int main(){

  int cases, length;
  std::cin >> cases;
  std::string message;

  while (std::cin >> message){
    length = sqrt(message.length());
    for (int i = length-1; i >= 0; --i){
      for (int j = i; j < message.length(); j+=length){
        std::cout << message[j];
      }
    }
    std::cout << std::endl;
  }

  return 0;
}