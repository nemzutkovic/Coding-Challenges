#include <iostream>
#include <vector>
#include <cmath>

int main(){
    
    int start, deadline, routes, temp, current_distance = 0;
    int walking_times[routes + 1], bus_ride_times[routes], bus_arrival_intervals[routes];
    bool did_yraglac_make_it = true;

    std::cin >> start >> deadline >> routes;
    
    for (int i = 0; i < routes + 1; i++) {
        std::cin >> temp;
        walking_times[i] = temp;
    }

    for (int i = 0; i < routes; i++) {
        std::cin >> temp;
        bus_ride_times[i] = temp;
    }
    
    for (int i = 0; i < routes; i++) {
        std::cin >> temp;
        bus_arrival_intervals[i] = temp;
    }

    for (int i = 0; i < routes + 1; i++){
        current_distance += walking_times[i];
        
        if (i == routes){
            did_yraglac_make_it = current_distance >= deadline ? false : true;
            break;
        }

        if (current_distance % bus_arrival_intervals[i] != 0)
            current_distance += abs(bus_arrival_intervals[i] - walking_times[i]);

        current_distance += bus_ride_times[i];
    }

    if (did_yraglac_make_it)
        std::cout << std::endl << "yes";
    else
        std::cout << std::endl << "no";
}