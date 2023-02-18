/* Given an array of N integers. The task is to find sum of it */

#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    cout << "\nSum of array is: " << sum(arr, n) << endl;
    return 0;
}