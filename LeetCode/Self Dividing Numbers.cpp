vector<int> selfDividingNumbers(int left, int right) {
  int j, digit;
  vector <int> nums;
  for (int i = left; i <= right; ++i){
    if (i < 10) nums.push_back(i);
    else{
      j = i;
      while (j != 0){
        digit = j % 10;
        if (digit == 0) break;
        if (i % digit != 0) break;
        j /= 10;
        if (j == 0) nums.push_back(i);
      }
    }
  }  

  return nums;
}