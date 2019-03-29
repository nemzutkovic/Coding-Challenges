#include <iostream>

int main(){

  int start, questions, max = 210, counter = 0, timespent;
  char action;
  std::cin >> start >> questions;

  while(questions != 0){
    std::cin >> timespent >> action;
    counter += timespent;
    if (counter > max) break;
    if (action == 'T') start += 1;
    if (start == 9) start = 1;
    --questions;
  }

  std::cout << start;

  return 0;
}