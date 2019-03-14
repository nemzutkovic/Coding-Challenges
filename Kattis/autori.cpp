#include <iostream>
#include <string>
using namespace std;

int main(){

  string authors, output;
  int i = 0;

  cin >> authors;
  output += authors[i];

  ++i;

  while (authors[i] != '\0'){
    if(authors[i - 1] == '-')
      output += authors[i];
    ++i;
  }

  cout << output;

}