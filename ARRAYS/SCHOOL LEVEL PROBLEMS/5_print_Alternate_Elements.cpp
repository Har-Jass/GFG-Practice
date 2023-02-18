/* You are given an array A of size N. You need to print elements of A in alternate order (starting from index 0). */

#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i = 0; i < n; i+=2) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    print(arr, n);
    return 0;
}