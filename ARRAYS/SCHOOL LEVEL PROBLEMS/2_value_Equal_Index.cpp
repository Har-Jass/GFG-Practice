/* Given an array Arr of N positive integers. 
   Your task is to find the elements whose value is equal to 
   that of its index value (Consider 1 based indexing) */

#include <iostream>
#include <vector>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
    vector<int> arr1;
	for(int i = 0; i < n; i++) {
	    if(arr[i] == i + 1)
	    {
	        arr1.push_back(arr[i]);
	    }
    }
    return arr1;
}

int main() {
    int n = 5;
    int arr[] = {15, 2, 45, 12, 7};

    vector<int> final(valueEqualToIndex(arr, n));

    for(int i = 0; i < final.size(); i++) {
        cout << final[i] << " ";
    }

    cout << endl;
    return 0;
}