#include <iostream>

/** METHOD 1
int main(){
  int cases, nums, i, total = 0;
  std::cin >> cases;

  while (cases != 0){
    std::cin >> nums;
    while (nums != 0){
      std::cin >> i;
      if (i > 0)  total = total + (i*i);
      nums--;
    }
    std::cout << total << std::endl;
    total = 0;
    cases--;
  }

  return 0;
}
**/

// METHOD 2

void numOfInts(int*, int*, int*, int*);
void doWork(int*, int*, int*);

int main(){
  int cases, nums, i, total = 0;
  std::cin >> cases;

  numOfInts(&cases, &nums, &i, &total);
  
  return 0;
}

void numofints(int *cases, int *nums, int *i, int *total){
  if (*cases == 0) return;
  std::cin >> *nums;
  if (*nums > 0) doWork(nums, i, total);
  else if (*nums == 0) std::cout << 0 << std::endl;
  *cases -= 1;
  numOfInts(cases, nums, i, total);
}

void doWork(int *nums, int *i, int *total){
  if (*nums != 0){
    std::cin >> *i;
    if (*i > 0) *total = *total + ((*i) * (*i));
  }
  else{
    std::cout << *total << std::endl;
    *total = 0;
    return;
  }
  *nums -= 1;
  doWork(nums, i, total);
}