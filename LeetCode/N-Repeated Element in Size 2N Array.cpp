int repeatedNTimes(vector<int>& A) {
  int n = A.size() / 2;
  map<int, int> elements;
  
  for (int i = 0; i < A.size(); ++i){
    if (elements[A[i]] == 0) elements[A[i]] = 1;
    else elements[A[i]] += 1;
    
    if (elements[A[i]] == n) return A[i];
  }
  
  return 0;
}