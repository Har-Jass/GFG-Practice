/*  Given a sorted array Arr of size N and a value X, find the number of array
    elements less than or equal to X and elements more than or equal to X */

#include <iostream>
#include <vector>
using namespace std;

vector<int> getMoreAndLess(int arr[], int n, int x)
{
    vector<int> a;
    int less = 0, more = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            less++;
        }
        if (arr[i] >= x)
        {
            more++;
        }
    }
    a.push_back(less);
    a.push_back(more);
    return a;
}

int main()
{
    int n = 7, x = 9;
    int arr[] = {1, 2, 8, 10, 11, 12, 19};

    vector<int> a(getMoreAndLess(arr, n, x));
    
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}