#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    cout<<"Enter the string-->  ";
    cin>>str;

    map<char, int> mpp;
    for(int i=0;i<str[i];i++)
    {
        mpp[str[i]]++;
    }
    
    cout<<"Character frequencies:"<<endl;
    for(auto it: mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}