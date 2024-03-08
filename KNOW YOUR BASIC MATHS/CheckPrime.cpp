/* Check Whether the number is prime or not */

#include<bits/stdc++.h>
using namespace std;
// 1st approach

/*

bool checkPrime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

*/

// 2nd approach


bool checkPrime(int n)
{
    int count=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
            {
                count++;
            }
        }
    }

    if(count==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"Enter the number--> ";
    cin>>n;
    cout<<"Is it a Prime Number? --> "<<checkPrime(n);
    return 0;
}