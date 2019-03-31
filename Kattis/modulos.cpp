#include <iostream>
#include <set>

int main(){

  int num;
  std::set<int> modulos;

  while(std::cin >> num){
    modulos.insert(num % 42);
  }

  std::cout << modulos.size();

  return 0;
}