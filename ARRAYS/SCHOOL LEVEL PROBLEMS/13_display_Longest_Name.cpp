/* Given a list of names, display the longest name */

#include <iostream>
using namespace std;

string longest(string names[], int n)
{
    string longStr = names[0];
    for (int i = 1; i < n; i++)
    {
        if (names[i].length() > longStr.length())
        {
            longStr = names[i];
        }       
    }
    return longStr;
}

int main()
{
    int n = 5;
    string names[] = {"Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks"};

    string lengthy = longest(names, n);

    cout << "\nLongest string in an array is: " << lengthy << endl;
    return 0;
}