#include <iostream>
using namespace std;

bool IsPerfect(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
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
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;

    if(IsPerfect(arr, n)) {
        cout << "\nPerfect" << endl;
    }
    else {
        cout << "\nNot Perfect" << endl;
    }

    return 0;
}