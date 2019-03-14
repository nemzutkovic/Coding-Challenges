#include <iostream>
#include <string>
using namespace std;

int main(){

  int hours, minutes, totalmin;

  cin >> hours >> minutes;

  totalmin = (hours*60 + minutes) - 45;
  if (totalmin < 0){
    cout << 23 << " " << (60 + totalmin);
  }
  else{

    hours = 0;
    minutes = 0;

    while (totalmin >= 60){
      hours += 1;
      totalmin -= 60;
    }

    minutes = totalmin;

    cout << hours << " " << minutes;
  }

}