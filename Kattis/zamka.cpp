#include <iostream>
#include <string>
using namespace std;

int main(){

  int numl, numd, numx, temp, sum;
  cin >> numl >> numd >> numx;

  int max = 0;
  int min = numd;

  for (int i = numl; i <= numd; ++i){
    
    sum = 0;
    temp = i;

    while (temp > 0){
      sum  = sum + temp % 10;
      temp = temp / 10;
    }

    if (sum == numx && i < min)
      min = i;

    if (sum == numx && i > max)
      max = i;

  }

  cout << min << endl << max << endl;

}