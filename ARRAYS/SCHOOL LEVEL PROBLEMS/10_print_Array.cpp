/* Given an array of size n, print all its elements */

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    printArray(arr, n);
    return 0;
}