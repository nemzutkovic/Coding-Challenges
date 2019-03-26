#include <iostream>
#include <set>

int main(){

  int teams = 0;
  std::string school, tname;
  std::cin >> teams;

  std::set<std::string> winners;

  while (winners.size() != 12){
    std::cin >> school >> tname;
    if (winners.find(school) == winners.end()){
      std::cout << school << " " << tname << std::endl;
      winners.insert(school);
    }
  }

  return 0;
}