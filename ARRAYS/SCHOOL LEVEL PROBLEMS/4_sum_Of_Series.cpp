#include <iostream>
using namespace std;

long long seriesSum(int n)
{
    return (long long)n * (n + 1) / 2;
}

int main()
{
    int n = 6;

    cout << "\nSum of series till " << n << " is " << seriesSum(n) << endl;
    return 0;
}