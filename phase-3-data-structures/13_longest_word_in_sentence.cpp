// reference: https://www.dremendo.com/cpp-programming-tutorial/cpp-string-methods-questions/q8-input-sentence-and-print-longest-word-in-cpp

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string sentence, word, longestWord = "";

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    // Extract words one by one
    while (ss >> word)
    {
        if (word.length() > longestWord.length())
        {
            longestWord = word;
        }
    }

    if (!longestWord.empty())
        cout << "Longest word = " << longestWord;
    else
        cout << "No words found!";

    return 0;
}
