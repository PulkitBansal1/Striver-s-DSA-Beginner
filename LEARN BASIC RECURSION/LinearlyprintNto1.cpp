/* PRINT IN TERMS OF N TO 1 */

#include<bits/stdc++.h>
using namespace std;
void printseries(int i,int n)
{
    if(i<1)
    {
        return;
    }
    cout<<i<<" ";
    printseries(i-1,n);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printseries(n,n);
    return 0;
}