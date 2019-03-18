#include <iostream>

int main(){

  int d, m, days, weekday;
  std::cin >> d >> m;

  std::string weekdays [7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) days = 31;
  else if (m == 2) days == 28;
  else days == 30;

  if (m == 1 || m == 10) weekday = 3;
  else if (m == 2 || m == 3 || m == 11) weekday = 6;
  else if (m == 4 || m == 7) weekday = 2;
  else if (m == 5) weekday = 4;
  else if (m == 6) weekday = 0;
  else if (m == 8) weekday = 5;
  else weekday = 1;

  for (int i = 1; i != days; ++i){
    if (i == d) break;
    else if (weekday + 1 == 7) weekday = 0;
    else weekday++;
  }

  std::cout << weekdays[weekday];

  return 0;
}