#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int vowels = 0, consonants = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (char ch : sentence) {
        // Convert to lowercase for easy comparison
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
