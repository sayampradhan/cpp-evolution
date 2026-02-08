#include <iostream>
#include <string>
#include <vector>
using namespace std;


// take input from the user individually and print all the lines
// as output.
int main() {
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    cin.ignore();

    string* lines = new string[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter line " << i + 1 << ":";
        getline(cin, lines[i]);
    }

    cout << "\nOutput:\n";
    for (int i = 0; i < n; i++) {
        cout << lines[i] << endl;
    }

    delete[] lines; //NERY IMPORTANT

    return 0;
}
