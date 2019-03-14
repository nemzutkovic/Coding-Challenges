#include <iostream>
#include <string>
using namespace std;

int main(){

  int gold, silver, copper, buyingpower;
  string bestvictory;
  cin >> gold >> silver >> copper;

  buyingpower = gold*3 + silver*2 + copper*1;

  if (buyingpower >= 8)
    bestvictory.append("Province or ");
  else if (buyingpower < 8 && buyingpower >= 5)
    bestvictory.append("Duchy or ");
  else if (buyingpower < 5 && buyingpower >= 2)
    bestvictory.append("Estate or ");

  if (buyingpower >= 6)
    bestvictory.append("Gold");
  else if (buyingpower >= 3 && buyingpower < 6)
    bestvictory.append("Silver");
  else
    bestvictory.append("Copper");

  cout << bestvictory;

}