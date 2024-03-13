/* Bubble Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm. */

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &v, int n)
{
    for(int i=0;i<n;i++)
    {
        bool isswapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j] > v[j+1])
            {
                int temp=v[j+1];
                v[j+1]=v[j];
                v[j]=temp;
                isswapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then the array is sorted.
        if (isswapped == false)
            break;
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    cout << "Sorted elements: ";
    bubble_sort(v, n);
    for(auto x : v)
    {
        cout << x << " ";
    }
    return  0;
}