/* Given a stream of incoming numbers, find average or mean of the stream at every point */

#include <iostream>
#include <vector>
using namespace std;

vector<float> streamAvg(int arr[], int n)
{
    vector<float> v;
    float avg;
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        avg = sum / (i + 1);
        v.push_back(avg);
    }
    return v;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    vector<float> v(streamAvg(arr, n));

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}