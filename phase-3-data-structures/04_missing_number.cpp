#include<iostream>
#include<vector>
using namespace std;

/*
To find the missing number in the array.

Example: 
Input: [1, 2, 3, 4, 5, 6, 8, 9]
Output: 7
*/

// function to find the missing number
int missing_num(const vector<int>& arr, int size){
    for (int i = 1; i <= size + 1; i++){
        bool found = false;

        for (int j = 0; j < size; j++){
            if (arr[j] == i){
                found = true;
                break;
            }
        }

        if (!found){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> arr;
    int n, num;

    cout<<"Enter size: ";
    cin>>n;

    for (int i = 0; i < n; i++){
        cout<<"Enter element at index "<<i<<" : ";
        cin>>num;
        arr.push_back(num);
    }

    cout<<"\nInput : ";
    for (int i : arr){
        cout<<i<<" ";
    }

    n = arr.size();

    int missingNum = missing_num(arr, n);

    cout<<endl;

    if (missingNum != -1){
        cout<<"The missing number is: "<<missingNum;
    }
    else{
        cout<<"Incorrect input array. The array should start from 1 to N.";
    }

    return 0;
}