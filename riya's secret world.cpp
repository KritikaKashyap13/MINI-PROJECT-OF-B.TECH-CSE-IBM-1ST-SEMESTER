#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string reversed = "";
    // Reverse the word
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }

    // Check if palindrome
    if (word == reversed)
        cout << "Perfect Secret Word" << endl;
    else
        cout << "Not a Secret Word" << endl;

    return 0;
}
