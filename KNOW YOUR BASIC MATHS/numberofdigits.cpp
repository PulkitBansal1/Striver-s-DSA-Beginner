/* Input: 'X' = 2

Output: 1 */

#include<bits/stdc++.h>
using namespace std;
int numberofdigits(int n)
{
    int count=0;
    while(n>0)
    {
        int digit=n%10;
        count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number--> ";
    cin>>n;
    cout<<"Number of digits in "<<n<<" are --> "<<numberofdigits(n);
    return 0;
}