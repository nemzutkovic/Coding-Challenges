int hammingDistance(int x, int y) {
  stack <int> stackx;
  stack <int> stacky;
  int diff = 0;
  
  while (x > 0 || y > 0){
    if (x % 2 == 0) stackx.push(0);
    else stackx.push(1);
    x /= 2;
    
    if (y % 2 == 0) stacky.push(0);
    else stacky.push(1);
    y /= 2;
  }
  
  while (!stackx.empty() || !stacky.empty()){
    if (stackx.top() != stacky.top()) diff += 1;
    stackx.pop();
    stacky.pop();
  }
  
  return diff;
}