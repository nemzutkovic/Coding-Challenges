#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

  int cases, b;
  float p, rate, abpm, bpm, maxabpm;

  cin >> cases;

  while (cin >> b >> p){

    bpm = 60*b / p;
    rate = (60 / p);
    abpm = bpm - rate;
    maxabpm = bpm + rate;

    cout << fixed << setprecision(4) << abpm << " " << bpm << " " << maxabpm << endl;

  }

}