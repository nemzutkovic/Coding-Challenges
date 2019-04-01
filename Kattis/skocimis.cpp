#include <iostream>

int main(){
  
  int k1, k2, k3, counter = 0;
  std::cin >> k1 >> k2 >> k3;

  while (1){
    if (k3 - 1 == k2 && k2 - 1 == k1) break;
    else if (k3 - k2 >= k2 - k1){
      k1 = k2;
      k2 = k1 + 1;
      counter += 1;
    }
    else if (k3 - k2 < k2 - k1){
      k3 = k2;
      k2 = k3 - 1;
      counter += 1;
    }
  }

  std::cout << counter;

}