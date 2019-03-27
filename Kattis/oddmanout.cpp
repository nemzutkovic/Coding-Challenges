#include <iostream>
#include <map>

int main(){

  int cases, counter = 1, n, guest;
  std::map<int, int> guestmap;
  std::cin >> cases;
  
  while(counter <= cases){
    std::cin >> n;
    while(n != 0){
      std::cin >> guest;
      if (guestmap[guest] == 0) guestmap[guest] = 1;
      else guestmap[guest] += 1;
      --n;
    }

    for (auto it = guestmap.begin(); it != guestmap.end(); ++it){
      if (it->second == 1) std::cout << "Case #" << counter << ": " << it->first << std::endl;
    }

    guestmap.clear();
    counter++;
  }

  return 0;
}