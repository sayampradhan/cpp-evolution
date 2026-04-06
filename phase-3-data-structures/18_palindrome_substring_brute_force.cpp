#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

// Function to find longest palindromic substring (brute force)
string longestPalindrome(string str) {
    int n = str.length();
    string longest = "";

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string sub = str.substr(i, j - i + 1);

            if (isPalindrome(sub) && sub.length() > longest.length()) {
                longest = sub;
            }
        }
    }

    return longest;
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    string result = longestPalindrome(str);
    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}
