#include <iostream>

using namespace std;

int main(){

    string characters;

    std::cin >> characters;

    int wordlength = characters.length() / 3;

    bool compare1 = true, compare2 = true, compare3 = true;

    for (int i = 0, j = wordlength, k = wordlength*2; i < wordlength; i++, j++, k++){
        compare1 = compare1 && characters[i] == characters[j];
        compare2 = compare2 && characters[i] == characters[k];
        compare3 = compare3 && characters[j] == characters[k];
    }

    if (compare1 || compare2)
        std::cout << characters.substr(0, wordlength);
    else
        std::cout << characters.substr(wordlength*2, wordlength*2 + wordlength);

    return 0;
}