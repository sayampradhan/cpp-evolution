#include<iostream>
using namespace std;

// check if a number is positive, negative or zero
main(){
    int num;
    cout<<"CHECK IF A NUMBER IS POSITIVE, NEGATIVE OR ZERO \n\n\n";
    cout<<"Enter a number: ";
    cin>>num;

    if (num < 0){
        cout<<num<<" is a negative number.";
    }
    else if (num > 0){
        cout<<num<<" is a positive number.";
    }
    else if (num == 0){
        cout<<num<<" is a zero.";
    }
    else{
        cout<<"Invalid";
    }
}
