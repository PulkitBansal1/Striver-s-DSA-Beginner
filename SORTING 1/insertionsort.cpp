/* Insertion Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Insertion sorting algorithm. */

#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i]; //copy the current element to be inserted
        int j = i-1;     //find the correct position of this element in the sorted array
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];  //shift the elements one position ahead
            j--;          //reduce the search range by one
        }
        arr[j+1]=temp;   //insert the copy into its correct position
    }
}

int main()
{
    int n;
    cout<<"ENter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    // Read the array elements from the user.
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "\nInsertion Sorted Array is : \n";
    insertionSort(arr, n);  // Sort the array using the insertionSort function.

    // Print the sorted array.
    for(auto x: arr)
    {
        cout << x << " ";
    }
    return 0;
}