#include <iostream>

int main(){

  int set, setcount = 1, i;
  std::string word;
  std::string wordlist [15] = {};
  std::cin >> set;

  while (set != 0){

    std::cout << "SET " << setcount << std::endl;

    for (i = 0; i < set; i++){
      std::cin >> word;
      wordlist[i] = word;
    }

    for (i = 0; i < set; i+=2){
      std::cout << wordlist[i] << std::endl;
      wordlist[i] = "";
    }

    for (i = set-1; i > 0; i--){
      if (wordlist[i] != ""){
        std::cout << wordlist[i] << std::endl;
        wordlist[i] = "";
      }
    }

    setcount++;
    std::cin >> set;
  }

  return 0;
}