#include<iostream>
#include<limits>
using namespace std;

void hollow_pyramid(int limit){
    for (int i = 1; i <= limit; i++){
        for (int j = 1; j <= i; j++){
            if (j == 1 || j == i){
                cout<<"* ";
            }
            else if (i == limit){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<'\n';
    }
}


int main(){
    hollow_pyramid(5);
}