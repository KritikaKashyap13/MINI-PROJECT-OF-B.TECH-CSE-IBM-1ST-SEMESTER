#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    int marks[n];
    cout << "Enter marks of " << n << " subjects: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    int highest = marks[0];
    int lowest = marks[0];

    // Find highest and lowest marks
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    cout << "\nHighest = " << highest << endl;
    cout << "Lowest = " << lowest << endl;

    return 0;
}
