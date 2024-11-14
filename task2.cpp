#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, i = 1;

    cout << "Enter a positive integer: ";
    cin >> N;
    if (N <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 1; 
    }
    while (i <= N) {
        sum += i;  
        i++;      
    }
    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
