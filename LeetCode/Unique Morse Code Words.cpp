int uniqueMorseRepresentations(vector<string>& words) {
  string morsecodes [26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
  set<string> uniquewords;
  string temp;
      
  for (int i = 0; i < words.size(); ++i){
    temp = "";
    for (int j = 0; j < words[i].length(); ++j){
      temp += morsecodes[(int) words[i][j] - 97];
    }
    uniquewords.insert(temp);
  }
  
  return uniquewords.size(); 
}