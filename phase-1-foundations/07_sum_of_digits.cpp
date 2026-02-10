#include<iostream>
using namespace std;

main(){
    int num;
    int sum = 0;

    cout<<"Enter a number: ";
    cin>>num;

    while(true){
        if (num > 9){
            sum += (num % 10);
            num /= 10;
        }
        if (num < 10){
            sum += num;
            break;
        }
    }
    cout<<sum;
}