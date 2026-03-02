#include<iostream>
using namespace std;

int fibonnaci(int n){
    int fibonnaci_element;

    if (n == 0){
        fibonnaci_element = 0;
        return fibonnaci_element;
        fibonnaci_element = 0;
    }
    else if (n == 1){
        fibonnaci_element = 1;
        return fibonnaci_element;
        fibonnaci_element = 0;
    }
    else{
        fibonnaci_element = fibonnaci(n - 1) + fibonnaci(n - 2);
        return fibonnaci_element;
        fibonnaci_element = 0;
    }

}


main(){
    int n = 0;
    cout<<"------------------------"<<endl<<"FIBONNACI SERIES"<<endl<<"------------------------"<<endl<<endl;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl<<endl;

    for (int i = 0; i <= n; i++){
        if (i < n)
        cout<<fibonnaci(i)<<", ";
        else
        cout<<fibonnaci(i)<<".";
    }


}