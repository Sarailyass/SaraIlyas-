#include <iostream>
using namespace std;

int main() {
    int number;
    int digitCount = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number == 0) {
        digitCount = 1;
    } else 
    {

        while (number != 0) {
            number /= 10;    
            digitCount++;   
        }
    }

    cout << "The number of digits is: " << digitCount << endl;

    return 0;
}
