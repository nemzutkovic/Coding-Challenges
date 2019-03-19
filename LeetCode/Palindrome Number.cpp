bool isPalindrome(int x) {
  if (x < 0) return false;
  long newx = 0, temp = x;

  while (temp != 0){
    newx += temp % 10;
    if (temp / 10 != 0 ) newx *= 10;
    temp = temp / 10;
  }

  if (x == newx) return true; 
  
  return false;
}