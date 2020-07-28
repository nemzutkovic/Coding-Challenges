#include <iostream>
#include <algorithm>

int main(){

    int length, hcut, vcut;

    std::cin >> length >> hcut >> vcut;

    int slice1 = 4 * hcut * vcut;
    int slice2 = 4 * (length - hcut) * vcut;
    int slice3 = 4 * hcut * (length - vcut);
    int slice4 = 4 * (length - hcut) * (length - vcut);

    int slices[4] = {slice1, slice2, slice3, slice4}; 
    
    std::cout << *std::max_element(slices, slices+4);
}