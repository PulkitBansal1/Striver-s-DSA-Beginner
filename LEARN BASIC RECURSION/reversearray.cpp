/* REVERSE AN ARRAY USING RECURSION */

#include<bits/stdc++.h>
using namespace std;
// Function to reverse an array using recursion
void  reverseArray(int arr[], int i, int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i], arr[n-i-1]); // swapping the elements
    reverseArray(arr, i+1, n); // recursively calling function
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr, 0, n); // starting from index 0 and going till n/2 element
    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";   //printing the reversed array
    }
    return 0;
}