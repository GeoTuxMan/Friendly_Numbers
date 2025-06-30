#include <iostream>
#include <cmath>
using namespace std;
//Friendly numbers are numbers that share the same abundancy index, meaning the ratio of the sum of their divisors to the number itself is equal.
// 30 and 140, 6 and 28

// Function to compute the sum of all divisors of a number (including itself)
int sumOfDivisors(int num) {
    if (num == 1) return 1;
    int sum = 1 + num; // 1 and num are always divisors
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i; // Avoid double-counting perfect squares
        }
    }
    return sum;
}

// Function to check if two numbers are friendly
bool areFriendly(int x, int y) {
    if (x == y) return true; // A number is trivially friendly with itself
    double ratioX = (double)sumOfDivisors(x) / x;
    double ratioY = (double)sumOfDivisors(y) / y;
    return (abs(ratioX - ratioY) < 1e-9); // Floating-point comparison with tolerance
}

int main() {
    int x, y;

    // Input validation (ensure x and y are positive)
    do {
        cout << "Enter number X: ";
        cin >> x;
    } while (x <= 0);

    do {
        cout << "Enter number Y: ";
        cin >> y;
    } while (y <= 0);

    // Check if they are friendly
    if (areFriendly(x, y)) {
        cout << x << " and " << y << " are friendly numbers!" << endl;
    } else {
        cout << x << " and " << y << " are NOT friendly numbers." << endl;
    }

    return 0;
}
