#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// function to move zero to the end
void moveZeros(vector<int> *arr, int size, int count){
    
}

main(){
    vector<int> arr;
    int size;
    int temp = 0;
    cout<<"Enter the length of the array: ";
    cin>>size;
    for (int i = 0; i < size; i ++){
        cout<<"Enter element at index "<<i<<" : ";
        cin>>temp;
        arr.push_back(temp);
        temp = 0;
    }
    int target = 0;
    int count = count(arr.begin(), arr.end(), target);
    moveZeros(arr, arr.size(), count);

}

