// Fibonacci Sequence
#include<iostream>
using namespace std;
int fibonacciSequence(int number) {
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return fibonacciSequence(number - 1) + fibonacciSequence(number - 2);
}

int main() {
    int number = 0;
    cout << "Enter A Number: ";
    cin >> number;
    cout << "Fibonacci Sequence: ";
    for (int varOne = 0; varOne <= number; varOne++) {
        cout << fibonacciSequence(varOne) << " ";
    }
    cout << endl;
    return 0;
}
