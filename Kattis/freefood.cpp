#include <iostream>

int main(){

  int events, start, end, free = 0;
  std::cin >> events;
  int year [366] = {0};

  while (std::cin >> start >> end){
    for (int i = start; i <= end; i++){
      year[i] = 1;
    }
  }

  for (int i = 1; i <= 365; i++){
    if (year[i] == 1) free++;
  }

  std::cout << free;

  return 0;
}