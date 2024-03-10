/* PRINT LINEARLY FROM 1 TO N (USING BACKTRACK) */

#include<bits/stdc++.h>
using namespace std;
void printseries(int i, int n)
{
    if(i<1)
    {
        return;
    }
    printseries(i-1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printseries(n,n);
    return 0;
}