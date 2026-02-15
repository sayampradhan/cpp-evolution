#include <iostream>
#include <limits>
using namespace std;

/*
--------------------------------
01-TRIANGLE
--------------------------------
Case A: Starting with 1 (5 Rows)
--------------------------------
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 
--------------------------------
Case B: Starting with 0 (5 Rows)
--------------------------------
0 
1 0 
1 0 1 
0 1 0 1
0 1 0 1 0
--------------------------------
*/

void zeroOneTiangle(int limit, int n) {
    for (int i = 1; i <= limit; i++) {
        for (int j = 1; j <= i; j++) {
            cout << n << " ";
            if (n == 0) {
                n = 1;
            } else {
                n = 0;
            }
        }
        cout << endl;
    }
}

int main() {
    int limit, n;

    cout << "Enter the no of rows of the 01 Triangle: ";
    while (!(cin >> limit) || limit <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a positive integer for rows: ";
    }

    cout << "Enter the first number (0 or 1): ";
    while (true) {
        if (cin >> n && (n == 0 || n == 1)) {
            break;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter a single digit only (0, 1): ";
        }
    }

    cout << endl;
    zeroOneTiangle(limit, n);

    return 0;
}