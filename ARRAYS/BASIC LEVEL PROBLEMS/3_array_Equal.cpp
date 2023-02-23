#include <iostream>
#include <algorithm>
using namespace std;

bool check(int arr[], int brr[], int n)
{
    sort(arr, arr + n);
    sort(brr, brr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == brr[i])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 5, 4, 0};
    int brr[] = {2, 4, 5, 0, 1};
    int n = 5;

    if (check(arr, brr, n))
    {
        cout << "\nEqual" << endl;
    }
    else
    {
        cout << "\nNot Equal" << endl;
    }
    return 0;
}