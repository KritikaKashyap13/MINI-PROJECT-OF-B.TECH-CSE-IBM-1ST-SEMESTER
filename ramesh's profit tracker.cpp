#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int records[100]; // simple array

    cout << "Enter profit/loss for each day:\n";
    for (int i = 0; i < n; i++) {
        cin >> records[i];
    }

    int totalProfit = 0; 
    int totalLoss = 0;

    // Calculate profit and loss
    for (int i = 0; i < n; i++) {
        if (records[i] > 0) {
            totalProfit += records[i];    // positive ? profit
        }
        else {
            totalLoss += -records[i];     // negative ? loss (convert to positive)
        }
    }

    int netBalance = totalProfit - totalLoss; // net = profit - loss

    // Output results
    cout << "\nTotal Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    return 0;
} 
