#include <iostream>

int main(){
  
  int cases, set, k, ssd, remainder, output;
  std::cin >> cases;

  while (std::cin >> set >> k >> ssd){
    output = 0;
    while (ssd > 0){
      remainder = ssd % k;
      output += remainder * remainder;
      ssd /= k;
    }
    std::cout << set << " " << output << std::endl;
  }

  return 0;
}