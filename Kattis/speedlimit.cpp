#include <iostream>

int main(){

  int n, s, t1, t2, total;
  std::cin >> n;
  while (true){
    total = 0;
    while (n != 0){
      std::cin >> s >> t1;
      if (total == 0) total += s * t1;
      else total += s * (t1 - t2);
      t2 = t1;
      n--;
    }
    std::cout << total << " miles" << std::endl;
    std::cin >> n;
    if (n == -1) break;
  }

  return 0;
}