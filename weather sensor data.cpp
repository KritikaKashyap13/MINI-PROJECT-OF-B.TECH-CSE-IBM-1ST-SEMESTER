#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of readings: ";
    cin >> n;

    int readings[n];
    cout << "Enter the temperature readings: ";
    for (int i = 0; i < n; i++) {
        cin >> readings[i];
    }

    int positive = 0, negative = 0, zero = 0;

    // Count positive, negative, and zero readings
    for (int i = 0; i < n; i++) {
        if (readings[i] > 0)
            positive++;
        else if (readings[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "\nPositive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}
