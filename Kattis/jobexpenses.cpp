#include <iostream>

int main(){
    int numOfExpenses, expense, totalExpenses = 0;
    std::cin >> numOfExpenses;

    for (int i = 0; i < numOfExpenses; i++){
        std::cin >> expense;
        if (expense < 0){
            totalExpenses += expense;
        }
    }

    std::cout << totalExpenses*-1 << std::endl;

    return 0;
}