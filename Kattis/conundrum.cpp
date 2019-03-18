#include <iostream>

int main(){

  std::string text;
  std::cin >> text;
  int count = 0;

  for (int i = 0; i < text.length(); i+=3){
    if (text[i]   != 'P') count++;
    if (text[i+1] != 'E') count++;
    if (text[i+2] != 'R') count++;
  }

  std::cout << count;

  return 0;

}