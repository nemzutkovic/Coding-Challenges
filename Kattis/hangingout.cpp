#include <iostream>

int main(){

  int limit, events, temp, total = 0, counter = 0;
  std::string direction;
  std::cin >> limit >> events;

  while(events != 0){
    std::cin >> direction >> temp;
    if (direction == "enter"){
      if (total + temp > limit) counter++;
      else total += temp;
    }
    else total -= temp;
    events--;
  }

  std::cout << counter;

  return 0;
}