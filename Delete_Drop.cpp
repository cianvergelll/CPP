#include <iostream>
#include <string>

using namespace std;

int main() {
    string original = "Hellow World!";
    string str = "Hello, World!";
    int start_index = 7, end_index = 12;

    str.erase(start_index, end_index - start_index);

    cout << "Original String: " << original << "\n";
    cout << "Remaining string: " << str << "\n";

    return 0;
}
