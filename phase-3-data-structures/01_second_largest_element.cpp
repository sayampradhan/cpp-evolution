#include<iostream>
#include<array>
#include<vector>
#include<climits>
using namespace std;

// Finding the second largest number in an array
/*
FOUR ALGORITHMS can be used to solve this problem are:
    1. Single-Pass Approach
    2. Two-Pass Approach
    3. Sorting Approach
    4. Tournament Approach
*/

void single_pass(int* arr, int length){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int i = 0;
    while(i < length){
        if (arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
        i++;
    }
    cout << "Second largest element in the array: " << max2;
}

main(){
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    vector<int> test(size);
    for (int i = 0; i < size; i++){
        cout<<"Enter the element "<<i + 1<<": ";
        cin>>test[i];
    }
    single_pass(test.data(), size);
}