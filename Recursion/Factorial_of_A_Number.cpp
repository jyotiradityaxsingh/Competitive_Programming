// Factorial of A Number
#include<iostream>
using namespace std;
int factorial(int number) {
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return number * factorial(number - 1);
}
int main(){
    int number = 0;
    cout << "Enter A Number: ";
    cin >> number;
    cout << "Factorial of " << number << " Is: " << factorial(number) << endl;
    return 0;
}