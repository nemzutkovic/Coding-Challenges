#include <iostream>
using namespace std;

int main(){

  int n1, n2, n3, n4, temp, points = 0, winnerposition, position = 1;

  while (cin >> n1 >> n2 >> n3 >> n4){
    temp = n1 + n2 + n3 + n4;
    if (temp > points){
      points = temp;
      winnerposition = position;
    }
    position++;
  }

  cout << winnerposition << " " << points;

}