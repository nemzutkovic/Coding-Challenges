#include <iostream>
#include <iomanip>

int main(){
  
  int samples;
  long ms, mstemp;
  double glucose, glucosetemp, trapezoid, output = 0;
  std::cin >> samples;

  std::cin >> mstemp >> glucosetemp;

  while(samples != 1){
    std::cin >> ms >> glucose;
    trapezoid = (((glucose + glucosetemp) / 2) * (ms - mstemp)) / 1000;
    output += trapezoid;
    mstemp = ms;
    glucosetemp = glucose;
    samples--;
  }

  std::cout << std::setprecision(8) << output << std::endl;

  return 0;
}