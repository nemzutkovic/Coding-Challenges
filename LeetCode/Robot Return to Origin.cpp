bool judgeCircle(string moves) {
  int i, x = 0, y = 0;
  for (i = 0; i < moves.length(); ++i){
    if (moves[i] == 'U') ++y;
    else if (moves[i] == 'D') --y;
    else if (moves[i] == 'L') --x;
    else ++x;
  }
  
  if (x == 0 && y == 0) return true;
  else return false;
}