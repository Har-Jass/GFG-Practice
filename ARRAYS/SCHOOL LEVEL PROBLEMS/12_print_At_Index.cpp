/* Given an array of N integers and an index Key. Your task is to print the element present at index key in the array */

#include <iostream>
using namespace std;

int findElementAtIndex(int a[], int n, int key)
{
    return a[key];
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 2;

    int element = findElementAtIndex(arr, n, key);

    cout << "\nArray element present at " << key << " index is: " << element << endl;
    return 0;
}