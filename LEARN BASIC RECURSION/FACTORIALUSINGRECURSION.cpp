/* FACTORIAL OF A GIVEN NUMBER USING RECURSION */

#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}