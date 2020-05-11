#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
/*
    int speed(int maxSpeed){
        return maxSpeed;
    }
*/
};

// note, function implementation outside the class.  optional.
int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << "i says car speed: "  <<  myObj.speed(200) << "\n"; // Call the method with an argument
  return 0;
}

