int peakIndexInMountainArray(vector<int>& A) {
  int i;
  for (i = 0; i < A.size(); ++i){
    if (A[i] > A[i+1]) break; //downward slope begins, so peak must be A[i]
  }
  return i;
}