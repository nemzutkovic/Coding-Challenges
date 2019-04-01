vector<int> diStringMatch(string S) {
  int i = 0;
  int d = S.length();
  int strlen = S.length();
  vector<int> perm;
       
  for (int x = 0; x < strlen; ++x){
    if (S[x] == 'I') {
      perm.push_back(i);
      ++i;
    }
    else {
      perm.push_back(d);
      --d;
    }
  }
  
  if (S[d-1] == 'D') perm.push_back(d);
  else perm.push_back(i);
  
  return perm;
  
}