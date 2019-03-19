int romanToInt(string s) {
  map<char,int> numerals = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
  int num = 0;
  
  for (int i = 0; i < s.length(); ++i){
    if (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) {      num += numerals[s[i+1]] - 1;   ++i; }
    else if (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) { num += numerals[s[i+1]] - 10;  ++i; }
    else if (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')) { num += numerals[s[i+1]] - 100; ++i; }
    else num += numerals[s[i]];
  }
  
  return num; 
}