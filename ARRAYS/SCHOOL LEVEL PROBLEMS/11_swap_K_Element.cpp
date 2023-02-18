/* Given an array of size N, swap the Kth element from beginning with Kth element from end */

#include <iostream>
using namespace std;

void swapKth(int arr[], int n, int k)
{
    swap(arr[k - 1], arr[n - k]);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 8, k = 3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    swapKth(arr, n, k);
    return 0;
}