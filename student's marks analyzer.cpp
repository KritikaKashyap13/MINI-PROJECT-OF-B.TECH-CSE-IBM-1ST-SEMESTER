#include <iostream>
using namespace std;

int main() {
    int n;
    int mark;
    cout<<"Enter total no. of subjects: ";
    cin >> n;
    cout<<"Enter marks of each subjects: ";
    cin >> mark;

    int total = 0;
    for (int i = 0; i < n; i++) {
       
        total += mark;
    }

    double average = (double)total / n;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}

