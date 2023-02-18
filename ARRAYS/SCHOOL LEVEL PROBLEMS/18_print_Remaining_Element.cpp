/*  Given a array of length N, at each step it is reduced by 1 element.
    In the first step the maximum element would be removed, while in the second step
    minimum element of the remaining array would be removed, in the third step again the maximum and so on.
    Continue this till the array contains only 1 element. And find the final element remaining in the array */

#include <iostream>
#include <algorithm>
using namespace std;

int leftElement(int a[], int n)
{
    sort(a, a + n);
    int start = 0, end = n - 1;
    while (start < end)
    {
        // a[end] = INT_MIN;
        end--;
        // a[start] = INT_MAX;
        start++;
        if (start + 1 == end)
        {
            return a[start];
        }
    }
    if (start == end)
    {
        return a[start];
    }
}

int main()
{
    int arr[] = {7, 8, 3, 4, 2, 9, 5};
    int n = 7;

    cout << "\nElement left at the end is: " << leftElement(arr, n) << endl;
    return 0;
}