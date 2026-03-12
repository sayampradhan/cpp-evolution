#include<iostream>
using namespace std;

// function to move zero to the end
void moveZeros(int *arr, int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if(arr[i]==0){
            count += 1;
        }
    }
}