vector<int> sortArrayByParity(vector<int>& A) {
  vector<int> list;
  
  for (auto it = A.begin(); it != A.end(); ++it){
    if (*it % 2 == 0) list.push_back(*it);
  }
  
  for (auto it = A.begin(); it != A.end(); ++it){
     if (*it % 2 == 1) list.push_back(*it);
  }
       
  return list;
}