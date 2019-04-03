#include <iostream>

int main(){

  int cases;
  std::cin >> cases;
  std::string sentence = "";

  while(cases != 0){
    getline(std::cin,sentence);
    if (sentence != "") {
      if (sentence.substr(0,10) == "Simon says") std::cout << sentence.substr(10,sentence.length()) << std::endl;
      --cases;
    }
  }
  
  return 0;
}