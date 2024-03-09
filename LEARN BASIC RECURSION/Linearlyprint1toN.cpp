/* PRINT LINEARLY FROM 1 TO N */

#include<bits/stdc++.h>
using namespace std;
void printnumber(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<" ";
    printnumber(1+i,n);
}
int main()
{
    int n;
    cout<<"Till how you want to print: ";
    cin>>n;
    printnumber(1,n);
    return 0;
}
