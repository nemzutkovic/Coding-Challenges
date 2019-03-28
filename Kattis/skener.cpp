#include <iostream>

int main(){

  int r, c, zr, zc;
  char character;
  std::string line;

  std::cin >> r >> c >> zr >> zc;

  while (r != 0){

    for (int i = 0; i < c; ++i){
      std::cin >> character;

      for (int j = 0; j < zc; ++j)
        line += character;
    }

    for (int k = 0; k < zr; ++k)
      std::cout << line << std::endl;
    
    line = "";
    --r;
  }

  return 0;
}