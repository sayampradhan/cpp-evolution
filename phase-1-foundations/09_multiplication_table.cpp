#include<iostream>
using namespace std;

/*
To take a number from the user
and print the MULTIPLICATION TABLE of that number.
*/

main(){
    int num;
    cout<<"----------- MULTIPLICATION TABLE -----------\n\n";
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

    cout<<"\n";

    for (int i = 1; i <= 10; i++){
        cout<<num<<" x " << i << " = "<<num*i<<endl;
    }
}