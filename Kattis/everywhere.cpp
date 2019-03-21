#include <iostream>
#include <set>

int main(){

  int testcases, trips;
  std::cin >> testcases;
  std::string city;
  std::set<std::string> catalogue;

  while (testcases != 0){
    std::cin >> trips;
    while (trips != 0){
      std::cin >> city;
      catalogue.insert(city);
      trips--;
    }
    std::cout << catalogue.size() << std::endl;
    catalogue.clear();
    testcases--;
  }


  return 0;
}