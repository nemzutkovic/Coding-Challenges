#include <iostream>
#include <string>
#include <map>

int main(){

  int i, sum1 = 0, sum2 = 0;
  std::string input, word1, word2;
  std::cin >> input;

  std::map<char,int> alphabet = {{'A',0},{'B',1},{'C',2},{'D',3},{'E',4},{'F',5},{'G',6},
                                 {'H',7},{'I',8},{'J',9},{'K',10},{'L',11},{'M',12},
                                 {'N',13},{'O',14},{'P',15},{'Q',16},{'R',17},{'S',18},
                                 {'T',19},{'U',20},{'V',21},{'W',22},{'X',23},{'Y',24},{'Z',25}};

  // Dividing & Summing
  for (i = 0; i < input.length(); i++){
    if (i < input.length() / 2){
      word1 += input[i];
      sum1 += alphabet[input[i]];
    }
    else{
      word2 += input[i];
      sum2 += alphabet[input[i]];
    }
  }
  
  // Finding Key
  while (sum1 > 25) sum1 -= 26;
  while (sum2 > 25) sum2 -= 26;

  // Rotating & Merging
  for (i = 0; i < word1.length(); i++){
    word1[i] += sum1;
    word2[i] += sum2;
    if (word1[i] > 90) word1[i] -= 26;
    if (word2[i] > 90) word2[i] -= 26;
    word1[i] += alphabet[word2[i]];
    if (word1[i] > 90) word1[i] -= 26;
  }

  std::cout << word1 << std::endl;

  return 0;
}