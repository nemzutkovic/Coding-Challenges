#include <iostream>
#include <algorithm>

int main(){

  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  int nums[4] = {a, b, c, d};
  std::sort(nums, nums + 4);

  std::cout << std::min(nums[0],nums[1]) * std::min(nums[2],nums[3]);

  return 0;
}