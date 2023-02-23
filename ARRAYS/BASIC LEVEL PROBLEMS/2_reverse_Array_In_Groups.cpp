#include <iostream>
using namespace std;

// reverse the array
void reverse(int arr[], int s, int e)
{
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

//Function to reverse every sub-array group of size k
void reverseInGroups(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i += k)
    {
        int s = i;
        int e = i + k - 1;
        if (e > n - 1)
        {
            e = n - 1;
        }
        reverse(arr, s, e);
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 3;

    reverseInGroups(arr, n, k);
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}