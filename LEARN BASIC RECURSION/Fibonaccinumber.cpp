/* Print Fibonacci Series up to Nth term
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term. */

#include<bits/stdc++.h>
using namespace std;

/* 1st Approach

int fib(int n)
{
    if(n==0 || n==1)
    {
        return  n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

*/

//USING RECURSION

int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    int last=fib(n-1); // storing the result of (n-1)th term in 'last' variable
    int slast=fib(n-2); // storing the result of (n-2)th term in 'slast' variable

    return last + slast;
}
int main()
{
    int n;
    cout<<"Enter the number for which you want to print fibonacci number: ";
    cin>>n;
    cout<<"\nFibonacci Series upto " << n << " terms are : ";
    for (int i = 0; i <=n; i++)
    {
        cout<<fib(i)<<" ";
    }
    return  0;
}