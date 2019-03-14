#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int addends, temp;
  long total = 0;

  cin >> addends;

  while (addends != 0){
    cin >> temp;
    total += pow((temp / 10),temp % 10);
    addends -= 1;
  }

  cout << total;

}