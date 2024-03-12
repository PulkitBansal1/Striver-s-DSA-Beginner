#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //pre store
    map<int, int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter the number for which you want to find frequency: ";
    cin>>q;

    //fetching

    cout<<mpp[q]<<endl;
    
    return 0;
}