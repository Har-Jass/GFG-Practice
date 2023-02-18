/* Given an array of N distinct elements, the task is to find all elements in array except two greatest elements in sorted order */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findElements(int a[], int n)
{
    sort(a, a + n);
    vector<int> arr;
    for (int i = 0; i < n - 2; i++)
    {
        arr.push_back(a[i]);
    }
    return arr;
}

int main()
{
    int arr[] = {2, 8, 7, 1, 4};
    int n = 5;

    vector<int> v(findElements(arr, n));

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}