/* Given an array Arr of size N, print second largest distinct element from an array. */

#include <iostream>
using namespace std;

int print2largest(int arr[], int n)
{
    // code here
    int l = -1, ml = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ml)
        {
            l = ml;
            ml = arr[i];
        }
        else if (arr[i] == ml)
        {
            continue;
        }
        else
        {
            if (arr[i] > l)
            {
                l = arr[i];
            }
        }
    }
    return l;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1, 36};
    int n = 7;

    int largest = print2largest(arr, n);

    cout << "\n2nd Largest Element in array is: " << largest << endl;
    return 0;
}