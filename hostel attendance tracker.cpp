#include <iostream>
using namespace std;

int main() {

    int studentTotal[10] = {0};  // total present days for each student
    int dayTotal[7] = {0};       // total present on each day

    int x; // to store each attendance input

    cout << "Enter attendance (1 = Present, 0 = Absent):\n";

    // Input for 10 students, 7 days each
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            cin >> x;
            studentTotal[i] += x;   // add to student total
            dayTotal[j] += x;       // add to day total
        }
    }

    cout << "\nWeekly Attendance Summary\n";
    cout << "-------------------------\n";

    // Print total present days for each student
    cout << "\nTotal Present Days:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << studentTotal[i] << endl;
    }

    // Finding student with highest attendance
    int maxAttend = studentTotal[0];
    int maxStudent = 1;

    for (int i = 1; i < 10; i++) {
        if (studentTotal[i] > maxAttend) {
            maxAttend = studentTotal[i];
            maxStudent = i + 1;
        }
    }

    cout << "\nStudent with Highest Attendance: Student "
         << maxStudent << " (" << maxAttend << " Days)\n";

    // Finding day with lowest attendance
    int minDay = 0;
    for (int j = 1; j < 7; j++) {
        if (dayTotal[j] < dayTotal[minDay]) {
            minDay = j;
        }
    }

    cout << "\nDay with Lowest Overall Attendance: Day " << minDay + 1 << endl;

    return 0;
}
