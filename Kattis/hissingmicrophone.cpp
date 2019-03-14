#include <iostream>
#include <string>
using namespace std;

int main(){

  string word;
  cin >> word;

  char letter = word[0];
  int i = 1;

  while (word[i] != '\0'){
    if (word[i] == 's' && letter == 's'){
      cout << "hiss";
      break;
    }

    letter = word[i];
    ++i;
  }

  if (word[i] == '\0')
    cout << "no hiss";

}