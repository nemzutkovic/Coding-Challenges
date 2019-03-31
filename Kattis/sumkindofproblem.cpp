#include <iostream>

int main(){
  
  int cases, k, n, i, s;
  std::cin >> cases;

  while (std::cin >> k >> n){
    s = 0;
    for (i = 1; i <= n; ++i){
      s += i;
    }
    std::cout << k << " " << s << " " << s*2 - n << " " << s*2 << std::endl;
  }

  return 0;
}