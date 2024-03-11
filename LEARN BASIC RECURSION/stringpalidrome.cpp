/* CHECK IF THE STRING IS PALINDROME (USING RECURSION) */

#include<bits/stdc++.h>
using namespace std;
bool check(int i, string &s)
{
    if(i>=s.length()/2)
    {
        return true;
    }
    if(s[i]!=s[s.length()-i-1])
    {
        return false;
    }
    return  check(i+1, s);
}
int main()
{
    string s;
    cout<<"Enter the string you want to check: ";
    getline(cin, s);
    check(0, s)?cout<<"The given string is a palindrome":cout<<"The given string is not a palindrome";
    return 0;
}
