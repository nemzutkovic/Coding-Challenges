#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int cups, number;
    std::cin >> cups;

    string a, b, color;
    bool isWord = true;
    vector <pair <int,string>> cuplist;

    for (int i = 0; i < cups; i++){
        std::cin >> a >> b;
        for (char& letter : a)
            isWord = isWord && islower(letter);
        
        if (isWord){
            color = a;
            number = stoi(b);
        }
        else{
            color = b;
            number = stoi(a) / 2;
        }

        cuplist.push_back(make_pair(number, color));
        isWord = true;
    }

    std::sort(cuplist.begin(), cuplist.end());
    for (int i = 0; i < cuplist.size(); i++){ 
        cout << cuplist[i].second << endl; 
    }

    return 0;
}