/* Print all the divisor of a number */

#include<bits/stdc++.h>
using namespace std;

// 1st Approach //

/*
void printalldivisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}
*/

// 2nd Approach //

void printalldivisors(int n)
{
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i)!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto i: v)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number--> ";
    cin>>n;
    cout<<"The Divisors are: ";
    printalldivisors(n);
    return 0;
}