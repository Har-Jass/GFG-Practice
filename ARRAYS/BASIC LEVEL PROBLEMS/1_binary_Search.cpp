#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    // code here
    int start = 0, end = n - 1, mid, flag = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (k == arr[mid])
        {
            flag = 1;
            // return mid;
            break;
        }
        else
        {
            if (k < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    if (flag == 1)
    {
        return mid;
    }
    else
    {
        return -1;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 4;
    cout << endl;
    cout << k << " found at " << binarysearch(arr, n, k) << " index." << endl;
    return 0;
}