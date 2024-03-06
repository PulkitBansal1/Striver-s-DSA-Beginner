/* Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

*/

#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int revN=0;
    while(n!=0)
    {
        int digit=n%10;
        revN=(revN*10)+digit;
        n=n/10;
    }
    return revN;
}
int main()
{
    int n;
    cout<<"Enter the number--> ";
    cin>>n;
    cout<<"Reversed number of "<<n<<" is --> "<<reverse(n);
    return 0;
}