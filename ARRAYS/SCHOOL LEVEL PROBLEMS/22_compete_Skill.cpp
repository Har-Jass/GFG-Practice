#include <iostream>
using namespace std;

void scores(int a[], int b[])
{
    int countA = 0, countB = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            countA++;
        }   
        if (b[i] > a[i])
        {
            countB++;
        }
        if (a[i] == b[i])
        {
            continue;
        }
    }
    int ca = countA;
    int cb = countB;

    if(ca > cb) {
        cout << "\nA wins." << endl;
    }
    else {
        cout << "\nB wins." << endl;
    }
}

int main()
{
    int a[] = {4, 2, 7};
    int b[] = {5, 6, 3};

    scores(a, b);
    return 0;
}