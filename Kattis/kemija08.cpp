#include <iostream>

int main(){

  std::string encoded;

  while(std::cin >> encoded){
    for (int i = 0; i < encoded.length(); ++i){
      if (encoded[i] == 'a' || encoded[i] == 'e' || encoded[i] == 'i' || encoded[i] == 'o' || encoded[i] == 'u'){
        std::cout << encoded[i];
        i += 2;
      }
      else{
        std::cout << encoded[i];
      }
    }
    std::cout << " ";
  }

  return 0;
}