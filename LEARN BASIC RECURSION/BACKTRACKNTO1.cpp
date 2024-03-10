/* PRINT FROM N TO 1 (USING BACKTRACK) */

#include<bits/stdc++.h>
using namespace std;
void printseries(int i, int n) {
    if(i>n)
    {
        return;
    }
    printseries(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    printseries(1,n);
    return 0;
}