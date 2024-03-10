/* Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers. */

#include<bits/stdc++.h>
using namespace std;
void add(int i, int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    add(i-1,sum+i);
}
int main()
{
    int n;
    cin>>n;
    add(n,0);
    return 0;
}
