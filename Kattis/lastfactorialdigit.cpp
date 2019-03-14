#include <iostream>
using namespace std;

int main(){

  int cases, num, temp;
  cin >> cases;

  while (cases != 0){
    cin >> num;

    temp = 1;
    while (num != 0){
      temp *= num;
      num--;
    }

    cout << temp % 10 << endl;

    cases--;
  }

}