#include <iostream>

int main(){

  std::string cards;
  std::cin >> cards;

  int i, tablets = 0, compass = 0, gear = 0, trio = 0;

  for (i = 0; i < cards.length(); ++i){
    if (cards[i] == 'T') ++tablets;
    else if (cards[i] == 'C') ++compass;
    else ++gear;

    if (tablets > trio && compass > trio && gear > trio) trio++;
  }

  if (tablets > trio && compass > trio && gear > trio) trio++;

  std::cout << tablets*tablets + compass*compass + gear*gear + 7*(trio);


  return 0;
}