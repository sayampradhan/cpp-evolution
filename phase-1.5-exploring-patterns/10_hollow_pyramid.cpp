#include<iostream>
#include<limits>

using namespace std;

void hollow_pyramid(int limit){
    for (int i = 1; i <= limit; i++){
        for (int k = 1; k <= limit - i; k++){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++){
            if (j == 1 || j == i)
            cout<<"* ";
            else if (i == limit) cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }
}

main(){
    int n;
    cout<<"Enter the no. of row of the hollow pyramid: ";
    cin>>n;
    while (true){
        if (!(cin.fail())){
            break;
        }
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Enter a digit one: ";
            cin>>n;
        }
    }
    hollow_pyramid(n);
}