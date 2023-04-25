#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int day;

    loop: cout << "Enter chosen day: ";
    cin >> day;

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
        default:
            goto loop;
    }

    return 0;
}