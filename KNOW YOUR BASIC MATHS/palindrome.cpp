/* Check whether a given number ’n’ is a palindrome number. */
#include<bits/stdc++.h>
using namespace std;
void ispalindrome(int n)
{
    int temp=n;
    int revN=0;
    while(n!=0)
    {
        int digit=n%10;
        revN=(revN*10)+digit;
        n=n/10;
    }
    if(temp==revN)
    {
        cout<<"Yes, the number is palindrome";
    }
    else
    {
        cout<<"No, the number is not palindrome";
    }
}
int main()
{
    int n;
    cout<<"Enter the number --> ";
    cin>>n;
    cout<<endl;

    ispalindrome(n);
    return 0;
}