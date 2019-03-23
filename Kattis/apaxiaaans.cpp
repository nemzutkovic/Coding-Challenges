#include <iostream>

int main(){

  std::string input;
  std::cin >> input;
  std::string output;

  output += input[0];

  for (int i = 0; i < input.length(); ++i){
    if (input[i+1] != input[i]) output += input[i+1];
  }

  std::cout << output;

  return 0;
}