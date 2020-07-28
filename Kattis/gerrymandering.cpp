#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main(){

    int precincts, districts, district, aVotes, bVotes, aWasted, bWasted, totalVotes = 0, numerator = 0;
    float efficiency;
    std::cin >> precincts >> districts;

    std::vector <std::pair <int, int>> data(districts);
    for (int i = 0; i < precincts; i++){
        std::cin >> district >> aVotes >> bVotes;
        data[district-1].first += aVotes;
        data[district-1].second += bVotes;
    }

    for (int i = 0; i < data.size(); i++){
        totalVotes = totalVotes + data[i].first + data[i].second;
        aWasted = round(data[i].first - (round(data[i].first + data[i].second)/2 + 1));
        bWasted = round(data[i].second - (round(data[i].first + data[i].second)/2 + 1));

        if (data[i].first > data[i].second){
            std::cout << "A " << (aWasted >= 0 ? aWasted : 0) << " " << data[i].second << std::endl;
            numerator = numerator + ((aWasted >= 0 ? aWasted : 0) - data[i].second);
        }
        else{
            std::cout << "B " << data[i].first << " " << (bWasted >= 0 ? bWasted : 0) << std::endl;
            numerator = numerator + (data[i].first - (bWasted >= 0 ? bWasted : 0));
        }
    }

    efficiency = float(abs(numerator)) / totalVotes;
    std::cout << std::setprecision(10) << efficiency;

    return 0;
}