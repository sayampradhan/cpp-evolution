#include<iostream>
#include<limits>
using namespace std;

/*
Print a rectangle pattern
*/

int main() {
    int width, length;

    cout << "Enter the width of rectangle (integers only): ";

    // I learned a new way of validating integer inputs without externally asking for user inputs
    // this method prevents the occurence of an infinite loop.    
    while (!(cin >> width)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Enter an integer: ";
    }

    cout << "Width entered successfully: " << width << endl << "\n\n";

    cout<<"Enter the length of rectangle (integers only): ";

    while(!(cin >> length)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Enter an integer: ";
    }

    cout << "Length entered successfully: "<< length << endl << "\n\n";

    // printing rectangle
    for(int i = 1; i <= length; i++){
        for (int j = 1; j <= width; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
