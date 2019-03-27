#include <iostream>
#include <vector>
#include <cmath>

int main(){

  int n, output = 0, i;
  std::vector<int> binarynum;
  
  std::cin >> n;

  while (n != 0){
    binarynum.push_back(n % 2);
    n /= 2;
  }

  i = binarynum.size()-1;

  for (auto it = binarynum.begin(); it != binarynum.end(); ++it){
    if (*it == 1) output += pow(2,i);
    --i;
  }

  std::cout << output;

  return 0;
}