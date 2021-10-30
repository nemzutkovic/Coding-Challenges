// Arrays Introduction

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arraySize, num = 0;
    std::cin >> arraySize;
    
    int list[arraySize];
    
    for (int i = 0; i != arraySize; ++i) {
        std::cin >> num;
        list[i] = num;
    }
    
    for (int i = arraySize; i > 0; --i)
        std::cout << list[i - 1] << " ";

    return 0;
}