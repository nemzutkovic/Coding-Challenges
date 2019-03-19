string longestCommonPrefix(vector<string>& strs) {
  string prefix = "";
  
  if (strs.empty()) return prefix;
  
  char tempchar;
  bool longest = true;

  for (int i = 0; i < (strs[0]).length(); i++){

    tempchar = (strs[0])[i];

    for (auto & word : strs){
      if (tempchar != word[i]){
        longest = false;
          break;
      }
    }

    if (longest == false) break;
    else prefix += (strs[0])[i];

  }

  return prefix;
}