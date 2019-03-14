#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

  int hands, total, i;
  char domsuit;
  string card;

  cin >> hands >> domsuit;

  map<char, int> dominant;
  dominant['A'] = 11;
  dominant['K'] = 4;
  dominant['Q'] = 3;
  dominant['J'] = 20;
  dominant['T'] = 10;
  dominant['9'] = 14;
  dominant['8'] = 0;
  dominant['7'] = 0;

  map<char, int> notdominant;
  notdominant['A'] = 11;
  notdominant['K'] = 4;
  notdominant['Q'] = 3;
  notdominant['J'] = 2;
  notdominant['T'] = 10;
  notdominant['9'] = 0;
  notdominant['8'] = 0;
  notdominant['7'] = 0;  

  for (i = 0; i < hands*4; ++i){
    cin >> card;
    if (card[1] == domsuit)
      total += dominant[card[0]];
    else
      total += notdominant[card[0]];
  }

  cout << total;

}