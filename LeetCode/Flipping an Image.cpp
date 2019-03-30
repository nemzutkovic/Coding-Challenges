vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
  for (auto i = A.begin(); i != A.end(); ++i){
    reverse(i->begin(), i->end());
    for (auto j = i->begin(); j != i->end(); ++j){
      if (*j == 1) *j = 0;
      else *j += 1;
    }
  }
  return A;
}