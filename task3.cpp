#include <iostream>
using namespace std;

int main() {
    int number, i = 1;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Multiply table for " << number << " is:" << endl;
    while (i <= 10) {
        cout << number << " x " << i << " = " << number * i << endl;
        i++; 
    }

    return 0;
}
