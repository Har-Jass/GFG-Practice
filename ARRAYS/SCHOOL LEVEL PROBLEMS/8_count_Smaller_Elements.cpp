/* Given an sorted array A of size N. Find number of elements which are less than or equal to given element X  */

#include <iostream>
using namespace std;

int countOfElements(int arr[], int n, int x) 
{
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= x) {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 8, 10};
    int n = 6;
    int x = 9;

    cout << "\nCount of elements less than " << x << " is " << countOfElements(arr, n, x) << endl;
    return 0;
}