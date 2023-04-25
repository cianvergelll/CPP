#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 8, 8, 11, 22, 15, 11, 13, 18, 20}, num[9], arr_total = 0, num_total = 0, i, missing;

    cout << "Given Array: [5, 8, 8, 11, 22, 15, 11, 13, 18, 20]\n\n";

    for(i=0; i<10; i++) {
        arr_total = arr_total + arr[i];
    }

    for(i=0; i<9; i++) {
        cout << "Enter Digit "<< i+1 <<": ";
        cin >> num[i];
    }

    for(i=0; i<9; i++) {
        num_total = num_total + num[i];
    }

    missing = arr_total - num_total;

    cout << "\nThe missing Array Element is :: " << missing;

    return 0;
}