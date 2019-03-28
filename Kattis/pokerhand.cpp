#include <iostream>
#include <map>

int main(){

  int max = 0;
  std::map<char, int> hand;
  std::string card;

  while(std::cin >> card){
    if (hand[card[0]] == 0) hand[card[0]] = 1;
    else hand[card[0]] += 1;

    if (hand[card[0]] > max) max = hand[card[0]];
  }

  std::cout << max;

  return 0;
}