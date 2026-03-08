#include<iostream>
#include<iterator>
using namespace std;

// Finding the second largest number in an array
/*
FOUR ALGORITHMS used to solve this problem are:
    1. Single-Pass Approach
    2. Two-Pass Approach
    3. Sorting Approach
    4. Tournament Approach
*/

void single_pass(int arr[]){
    int max1, max2;
    int length = std::size(arr);
    for (int i = 0; i < length; i++){
        if (arr[i]<arr[i+1]){
            int max2 = arr[i];
            int max1 = arr[i+1];
        }
        else{
            int max2 = arr[i+1];
            int max1 = arr[i];
        }
    }
    cout<<"Second"
}

main(){

}