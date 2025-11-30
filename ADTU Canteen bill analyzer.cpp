#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter number of days: ";
    cin >> m;

    int studentTotal[100] = {0};
    int dayTotal[100] = {0};

    cout << "\nEnter the canteen bill amounts:\n";

    // Taking input and calculating totals simultaneously
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            int amount;
            cin >> amount;

            studentTotal[i] += amount;  // add to student total
            dayTotal[j] += amount;      // add to day total
        }
    }

    // Printing student totals
    cout << "\n--- Weekly Spending by Each Student ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: ?" << studentTotal[i] << endl;
    }

    // Finding highest collection day
    int maxDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }
    cout << "\nHighest collection on Day " << maxDay + 1 << endl;

    // Finding highest spender(s)
    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    cout << "Highest spender: ";
    bool first = true;

    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (!first) cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }
    cout << endl;

    return 0;
}
