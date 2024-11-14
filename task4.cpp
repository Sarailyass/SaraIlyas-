
#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;
    cout << "Enter an integer: ";
    cin >> number;
    while (number != 0) {
        int lastDigit = number % 10;         
        reversedNumber = reversedNumber * 10 + lastDigit; 
        number /= 10;                          
    }

    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
