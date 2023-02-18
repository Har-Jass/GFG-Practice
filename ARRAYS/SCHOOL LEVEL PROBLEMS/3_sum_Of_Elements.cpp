/* Given an integer array arr of size n, you need to sum the elements of arr */

#include <iostream>
using namespace std;

int sumElement(int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {3, 2, 1, 5};
    int n = 4;

    cout << "\nSum of array element are: " << sumElement(arr, n) << endl;
    return 0;
}