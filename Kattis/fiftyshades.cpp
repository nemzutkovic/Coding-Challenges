#include <iostream>

int main(){

    int words, counter = 0;
    bool containsWord = false;
    std::string word;
    std::cin >> words;

    for (int i = 0; i < words; i++){
        std::cin >> word;
        for (int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }

        for (int i = 0; i < word.length(); i += 1){
            if ((i != word.length() - 3) && ("pink" == word.substr(i, 4) || "rose" == word.substr(i, 4))){
                counter += 1;
                break;
            }
        }
    }

    if (counter == 0){
        std::cout << "I must watch Star Wars with my daughter";
    }
    else{
        std::cout << counter;
    }

    return 0;
}