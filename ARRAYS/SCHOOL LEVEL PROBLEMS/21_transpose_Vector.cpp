/*  */
#include <iostream>
#include <vector>
using namespace std;
const int M = 3;

vector<vector<int>> transpose(int arr[][M], int n)
{
    //vector<vector<int>> arr(n, vector<int>(n));
    vector<vector<int>> v(n, vector<int>(M));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < M; j++){
            v[i][j] = arr[j][i];
        }
    }
    return v;
}

int main() {
    int arr[][3] = {
                    {1,2,3}, 
                    {4,5,6}, 
                    {7,8,9}
                  };

    int n = 3;

    vector<vector<int>> v(transpose(arr, n));

    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v.size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}