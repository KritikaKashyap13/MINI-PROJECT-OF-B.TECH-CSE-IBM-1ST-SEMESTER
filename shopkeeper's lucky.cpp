#include <iostream>
using namespace std;

int main() {
    int number;

    cin >> number;

    if (number % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    if (number % 5 == 0)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not Divisible by 5" << endl;

    return 0;
}

