/*  Given a number N. Your task is to check whether it is fascinating or not.
    Fascinating Number: When a number(should contain 3 digits or more) is multiplied by 2 and 3,
    and when both these products are concatenated with the original number,
    then it results in all digits from 1 to 9 present exactly once */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool fascinating(int n)
{

    string num = "123456789";

    int mul = n;
    int mulwith2 = n * 2;
    int mulwith3 = n * 3;

    // converting integers to string
    string s1 = to_string(mul);
    string s2 = to_string(mulwith2);
    string s3 = to_string(mulwith3);

    // concatenating the string to final string
    string final = s1 + s2 + s3;

    // sorting the final string
    sort(final.begin(), final.end());

    if (final == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 192;

    if(fascinating(n)) {
        cout << "\nFascinating." << endl;
    }
    else {
        cout << "\nNot Fascinating." << endl;
    }
    return 0;
}