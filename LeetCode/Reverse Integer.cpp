int reverse(int x) {        
        
  int output = 0;
  bool negative = false;

  if (x == INT_MIN) return 0;

  if (x < 0){
    negative = true;
    x *= -1;
  }
      
  while (x > 0){
    output += x % 10;
    x = x / 10;
    if (negative == false && INT_MAX / 10 < output && x != 0) return 0;
    else if (negative == true && (INT_MIN * 10 > output || INT_MAX / 10 < output) && x != 0) return 0;
    else if (x != 0) output *= 10;
  }

  if (negative == true) output *= -1;

  return output;

}