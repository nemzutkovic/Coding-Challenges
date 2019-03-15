#include <iostream>
#include <map>
using namespace std;

int main(){

  int dice1, dice2;
  cin >> dice1 >> dice2;

  map <int, int> possibilities;

  for (int i = 1; i <= dice1; i++){
    for (int j = 1; j <= dice2; j++){

      if (possibilities[i+j] == 0)
        possibilities[i+j] = 1;
      else
        possibilities[i+j]++;

    }
  }

  int mostlikely = 0;

  for (auto it = possibilities.cbegin(); it != possibilities.cend(); ++it){
    if (it->second > mostlikely)
      mostlikely = it->second;
  }

  for (auto it = possibilities.cbegin(); it != possibilities.cend(); ++it){
    if (it->second == mostlikely){
      cout << it->first << endl;
    }
  }

  return 0;

}