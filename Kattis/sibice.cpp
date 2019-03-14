#include <iostream>
#include <cmath>
using namespace std;

int main(){

  long nummatches, width, height, length, limit;
  cin >> nummatches;
  cin >> width;
  cin >> height;

  limit = sqrt(pow(width,2.0) + pow(height,2.0));

  while (cin >> length){
    if (length <= limit){
      cout << "DA" << endl;
    }
    else{
      cout << "NE" << endl;
    }
  }

}