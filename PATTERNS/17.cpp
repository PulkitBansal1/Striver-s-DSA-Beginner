/*
            A
           ABA
          ABCBA
         ABCDCBA
         
*/

#include<bits/stdc++.h>
using namespace std;
void print17(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n-j-1;j++)
        {
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for(int j=0;i<n-j-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows---> ";
    cin>>n;
    cout<<"Required pattern--> "<<endl;
    print17(n);
    return 0;
}