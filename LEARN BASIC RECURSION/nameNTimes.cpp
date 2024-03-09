/* PRINT NAME N TIMES USING RECURSION */

#include<bits/stdc++.h>
using namespace std;
void printname(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"Pulkit"<<" ";
    printname(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter how times  you want to print the name: ";
    cin>>n;
    printname(1,n);
    return 0;
}