/* Given a Integer array A[] of n elements.
   Return 1 if all the elements of the Array are palindrome otherwise it will return 0 */

#include <iostream>
using namespace std;

int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int ans = 0;
        int r;
        while (temp > 0)
        {
            r = temp % 10;
            temp = temp / 10;
            ans = (ans * 10) + r;
        }
        if (ans != a[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[] = {111, 222, 333, 444, 555};
    int n = 5;

    cout << "\nIf 1, then Palindrome.";
    cout << "\nIf 0, then Not Palindrome.";
    cout << endl;
    cout << endl;
    cout << PalinArray(arr, n) << endl;
    return 0;
}