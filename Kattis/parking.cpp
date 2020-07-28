#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main(){
    int cases, shops, location, min_distance;
    float avg;
    std::cin >> cases;

    for (int i = 0; i < cases; i++){
        min_distance = 0;
        avg = 0;
        std::cin >> shops;
        std::vector<int> locations;
        for (int i = 0; i < shops; i++){
            std::cin >> location;
            locations.push_back(location);
            avg += location;
        }
        sort(locations.begin(), locations.end());
        avg = round(avg / shops);
        for (int i = 0; i < locations.size(); i++){
            if (i == 0){
                min_distance += abs(avg - locations[i]); // Walk from car to first shop
            }
            else{
                min_distance += locations[i] - locations[i - 1]; // Walk from shop to shop
            }
        }
        min_distance += locations[locations.size() - 1] - avg; // Walk back to car from last shop
        std::cout << min_distance << std::endl;
    }
    return 0;
}