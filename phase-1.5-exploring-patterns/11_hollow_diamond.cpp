#include<iostream>
#include<limits>
using namespace std;

void hollow_diamond(int n){
    for (int i = 1; i <= n; i++){
        for (int k = 1; k <= n; k++){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

main(){
    hollow_diamond(5);
}