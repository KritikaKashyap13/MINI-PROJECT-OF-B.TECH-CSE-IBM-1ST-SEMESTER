#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of students: ";
    cin >> n;

    int attendance[n];
    cout << "Enter attendance record (1 for present, 0 for absent): ";
    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
    }

    int present = 1, absent = 0;

    // Count present and absent students
    for (int i = 0; i < n; i++) {
        if (attendance[i] == 1)
            present++;
        else if (attendance[i] == 0)
            absent++;
    }

    cout << "\nPresent: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}
