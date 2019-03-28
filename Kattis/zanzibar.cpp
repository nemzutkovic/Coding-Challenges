#include <iostream>

int main(){

  int cases, onisland, prev, num;
  std::cin >> cases;

  while(cases != 0){
    std::cin >> prev;
    num = 0;
    while(std::cin >> onisland){
      if (onisland == 0) break;
      else if (onisland > prev*2) num += (onisland - prev*2);
      prev = onisland;
    }
    std::cout << num << std::endl;
    --cases;
  }


  return 0;
}