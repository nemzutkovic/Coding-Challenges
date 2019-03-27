vector<int> sortedSquares(vector<int>& A) {
  for (auto it = A.begin(); it != A.end(); ++it){
    *it = *it * *it;
  }
  sort(A.begin(), A.end());
  return A;
}