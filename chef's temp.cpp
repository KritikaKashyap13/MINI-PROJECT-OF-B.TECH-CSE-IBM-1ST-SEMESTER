#include <iostream> 
using namespace std;

int main() {
    double celsius;

    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}

