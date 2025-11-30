#include <iostream>
using namespace std;

int main() {
    int days;   
    cout << "Enter number of days you want to enter expenses for: ";
    cin >> days;

    int expense[100]; 


    cout << "\nEnter your expenses for each day:\n";
    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> expense[i];
    }

    
    int total = 0;
    for (int i = 0; i < days; i++) {
        total += expense[i];
    }

    
    float average = (float)total / days;

    
    cout << "\n--- Canteen Expense Summary ---\n";
    cout << "Total Expense: Rs. " << total << endl;
    cout << "Average Daily Expense: Rs. " << average << endl;

    return 0;
}
