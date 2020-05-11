#include <iostream>
    // Include the cmath library
#include <cmath>
using namespace std;

int main() {

int day = 4;
    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }
// Outputs "Thursday" (day 4)

    
    
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }


    int ii = 0;
    do {
        cout << ii << "\n";
        ii++;
    }
    while (ii < 5);

    for (int x = 0; x <= 10; x = x + 2) {
        cout << x << "\n";
    }

    for (int y = 0; y <= 10; y = y + 2) {
        cout << y << "\n";
    }


    //
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0];

    for(int r = 0; r < 4; r++) {
        cout << cars[r] << "\n";
    }

}