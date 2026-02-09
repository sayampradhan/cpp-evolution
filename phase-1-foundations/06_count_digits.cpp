#include <bits/stdc++.h>
using namespace std;



int main()
{
    int k;
    int count = 0;

    cout<<"Enter a number: ";
    cin>>k;

    int num = k; //copy value of k into num

    if (num == 0){
        cout<<"\n\nEnter a NON-ZERO Number.";
    }

    while (num != 0)
    {
        num /= 10; // divides the number by 10 until number turns 0
        ++count;
    }

    cout << "\nNo. of digits in "<< k << " is " << count<<"\n\n";

    return 0;
}