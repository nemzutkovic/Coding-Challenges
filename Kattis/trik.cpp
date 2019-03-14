#include <iostream>
#include <string>
using namespace std;

int main(){

  string letters;
  int position = 1;
  int i = 0;

  cin >> letters;

  while (letters[i] != '\0'){

    if ((position == 1 && letters[i] == 'A') || (position == 3 && letters[i] == 'B'))
      position = 2;

    else if ((position == 1 && letters[i] == 'C') || (position == 2 && letters[i] == 'B'))
      position = 3;

    else if ((position == 2 && letters[i] == 'A') || (position == 3 && letters[i] == 'C'))
      position = 1;

    ++i;
  }

  cout << position;

}