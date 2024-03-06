/* ARMSTRONG NUMBER */

#include<bits/stdc++.h>
using namespace std;

void checkarmstrong(int n)
{
    int temp = n;
    int numdigits = 0;
    long long sum = 0;
    int copy = n;

    while (copy != 0)
    {
        int digit = copy % 10;
        numdigits++;
        copy = copy / 10;
    }

    copy = n;

    while (copy != 0)
    {
        int digit = copy % 10;
        long long digitpower = 1;

        for (int i = 0; i < numdigits; i++)
        {
            digitpower = digitpower * digit;
        }

        sum = sum + digitpower;
        copy = copy / 10;
    }

    if (sum == temp)
    {
        cout << "Yes, the entered number is an armstrong number.";
    }
    else
    {
        cout << "No, the entered number is not an armstrong number.";
    }
}

int main()
{
    int n;
    cout << "Enter the number--> ";
    cin >> n;
    checkarmstrong(n);

    return 0;
}


