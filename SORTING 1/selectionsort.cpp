/* Selection Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm. 

Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52

 */

#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j] < v[minIndex])
            {
                minIndex=j;
            }
        }
        swap(v[i],v[minIndex]); 
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array--> ";
    cin>>n;
    vector<int> v;
    v.resize(n);
    cout<<"Enter the elemnts of array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //calling selection sort function
    cout<<"Sorted Array Using  Selection Sort is : \n";
    selectionSort(v,n);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}