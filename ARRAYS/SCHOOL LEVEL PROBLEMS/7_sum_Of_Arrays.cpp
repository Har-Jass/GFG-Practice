/* Given an array of N integers. Your task is to print the sum of all of the integers */

#include <iostream>
using namespace std;

int getSum(int a[], int n)
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

    cout << "\nSum of array is: " << getSum(arr, n) << endl;
    return 0;
}