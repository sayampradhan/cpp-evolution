#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/**
 * --------------------------------------------------------
 * MY APPROACH:
 * 1. Take an integer input from the user.
 * 2. Convert the integer to a string.
 * 3. Reverse the string representation of the number.
 * 4. Convert the reversed string back to an integer.
 * 5. Compare the reversed number with the original number.
 *    - If both are equal → The number is a palindrome.
 *    - Otherwise → The number is not a palindrome.
 * --------------------------------------------------------
 * There can be multiple approaches to solve this question.
 */


main(){
    int num;
    cout<<"TO CHECK IF A NUMBER IS PALINDROME.\n\n";
    cout<<"Enter a number: ";
    cin>>num;

    while(true){
        if(cin.fail()){
            cin.clear();
            cin.ignore(132, '\n');
            cout<<"\nEnter a valid number: ";
            cin>>num;
        }
        if(!cin.fail()){
            break;
        }
    }

    string temp = to_string(num);
    reverse(temp.begin(), temp.end());

    int rev_num = stoi(temp);

    if(num == rev_num){
        cout<<"\nThe number "<<num<< " is a PALINDROME.";
    }
    else{
        cout<<"\nThe number "<<num<< " is NOT a palindrome.";
    }
}