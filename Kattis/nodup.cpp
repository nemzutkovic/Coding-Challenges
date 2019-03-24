#include <iostream>
#include <map>

int main(){

  std::string word;
  bool flag = true;
  std::map<std::string, int> wordmap;

  while (std::cin >> word){
    if (wordmap[word] == 0) wordmap[word] = 1;
    else {
      flag = false;
      break;
    }
  }

  if (flag == true) std::cout << "yes";
  else std::cout << "no";

  return 0;
}