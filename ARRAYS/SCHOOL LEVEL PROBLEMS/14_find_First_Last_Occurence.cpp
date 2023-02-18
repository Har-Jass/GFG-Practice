/*  Given an unsorted array of N integers and a Key which is present in this array.
    You need to write a program to find the start index(index where the element is first found from left in the array) and
    end index(index where the element is first found from right in the array).
    If the key does not exist in the array then return -1 for both start and end index in this case */

#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndex(int a[], int n, int key)
{
    vector<int> arr;
    int f1 = 0, f2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            f1 = 1;
            arr.push_back(i);
            break;
        }
    }

    for (int j = n - 1; j >= 0; j--)
    {
        if (a[j] == key)
        {
            f2 = 1;
            arr.push_back(j);
            break;
        }
    }

    if (f1 && f2 == 1)
    {
        return arr;
    }
    else
    {
        arr.push_back(-1);
        arr.push_back(-1);
        return arr;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 5, 5};
    int n = 9;
    int key = 4;

    vector<int> v(findIndex(arr, n, key));

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}
