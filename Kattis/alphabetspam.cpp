#include <iostream>

int main(){

  std::string text;
  std::cin >> text;

  float whitespaces = 0, lowerletters = 0, upperletters = 0, symbols = 0;
  int length = text.length();

  for (int i = 0; i < length; ++i){
    if (text[i] == '_') whitespaces++;
    else if (text[i] >= 97 && text[i] <= 122) lowerletters++;
    else if (text[i] >= 65 && text[i] <= 90) upperletters++;
    else symbols++;
  }

  std::cout << whitespaces  / length << std::endl;
  std::cout << lowerletters / length << std::endl;
  std::cout << upperletters / length << std::endl;
  std::cout << symbols      / length << std::endl;

  return 0;
}