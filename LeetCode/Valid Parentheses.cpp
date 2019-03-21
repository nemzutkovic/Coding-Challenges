bool isValid(string s) {      
    
  int i;
  stack<char> parentheses;
  
  for (i = 0; i < s.length(); ++i){
    if (s[i] == '(' || s[i] == '{' || s[i] == '[') parentheses.push(s[i]);
    else if (parentheses.empty()) return false;
    else if ((s[i] == ')' && parentheses.top() == '(') || (s[i] == '}' && parentheses.top() == '{') || (s[i] == ']' && parentheses.top() == '[')) parentheses.pop();
    else return false;
  }
  
  return parentheses.empty();  
    
}