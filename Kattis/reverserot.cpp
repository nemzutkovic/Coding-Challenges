#include <iostream>
#include <algorithm>

int main(){
  
  int rotation, i;
  std::string original, scheme = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
  std::cin >> rotation;
  
  while(rotation != 0){
    std::cin >> original;
    std::reverse(original.begin(), original.end());
    for (i = 0; i < original.length(); ++i){
      if (scheme.find(original[i]) + rotation < scheme.length()){
        original[i] = scheme[scheme.find(original[i]) + rotation];
      }
      else{
        original[i] = scheme[(scheme.find(original[i]) + rotation) - scheme.length()];
      }
    }
    std::cout << original << std::endl;
    std::cin >> rotation;
  }

  return 0;
}