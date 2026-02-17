#include<iostream>
#include<limits>
using namespace std;

void hollow_diamond(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<"* ";
        }
        cout<<" ";
    }

}

main(){
    hollow_diamond(5);
}