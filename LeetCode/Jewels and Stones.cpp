int numJewelsInStones(string J, string S) {
    
  set<char> jewels;
  int count = 0;
  
  for (int i = 0; i < J.length(); ++i){
    jewels.insert(J[i]);
  }
  
  for (int i = 0; i < S.length(); ++i){ 
    if (jewels.find(S[i]) != jewels.end()) count++;
  }
  
  return count;
}