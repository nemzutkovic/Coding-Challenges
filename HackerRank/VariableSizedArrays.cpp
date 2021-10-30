// Variable Sized arrays

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int variableArrays, queries, k, num, i, j = 0;
    vector<vector <int>> n;
    
    std::cin >> variableArrays;
    std::cin >> queries;
    
    while (variableArrays != 0){
        std::cin >> k;
        vector<int> variableArray;
        for (int i = 0; i < k; ++i){
            std::cin >> num;
            variableArray.push_back(num);
        }
        n.push_back(variableArray);
        --variableArrays;
    }

    while (queries != 0) {
        std::cin >> i >> j;
        std::cout << n[i][j] << std::endl;
        --queries;
    }

    return 0;
}
