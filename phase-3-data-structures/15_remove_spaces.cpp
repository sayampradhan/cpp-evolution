#include <iostream>
#include <string>
using namespace std;

string removeSpaces(string s) {
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {

            // shift all characters left
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            i--;
        }
    }

    // return string up to new length
    return s.substr(0, n);
}

int main() {
    string s;
    cout<<"Enter a string (with spaces): ";
    cout << removeSpaces(s);
    return 0;
}