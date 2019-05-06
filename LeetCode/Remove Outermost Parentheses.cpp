string removeOuterParentheses(string S) {
  int openbrackets = 0;
  int closebrackets = 0;
  int position = 0;
  string result = "";
  
  for(int i = 0; i < S.length(); i++){
    if (S[i] == '(') ++openbrackets;
    else if (S[i] == ')') ++closebrackets;       
    if (openbrackets == closebrackets){
      result.append(S.substr(position + 1, i - position - 1));
      position = i + 1;
    }
  }
  
  return result;
}