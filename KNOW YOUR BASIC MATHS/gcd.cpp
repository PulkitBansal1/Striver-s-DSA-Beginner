/* CALCULATE GCD / HCF OF GIVEN TWWO NUMBERS */

#include<bits/stdc++.h>
using namespace std;

// 1st APPROACH

/*

void gcdnumbers(int n1, int n2)
{
    for(int i=min(n1,n2) ;i>=1; i--)
    {
        if((n1%i==0) && (n2%i==0))
        {
            cout<<"\nGCD of numbers is: "<< i << endl;
            break;
        }
    }
}

*/

//2nd APPROACH



void gcdnumbers(int n1, int n2)
{
    while((n1 > 0) && (n2 > 0))
    {
        if(n1>n2)
        {
            n1=n1%n2;
        }
        else
        {
            n2=n2%n1;
        }
    }
    if(n1==0)
    {
        cout<<"\nGCD of numbers is: "<< n2<<endl;
    }
    else
    {
        cout<<"\nGCD of numbers is: "<<n1<<endl;
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter the first number--> ";
    cin>>n1;
    cout<<"\nEnter the second number--> ";
    cin>>n2;
    gcdnumbers(n1,n2);
    return 0;
}