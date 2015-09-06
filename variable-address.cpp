#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << "Address of the number that was entered: " << & number << endl;

    return 0;
}
