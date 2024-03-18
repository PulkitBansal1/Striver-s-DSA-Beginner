/* Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5

Example 2:
Input: [1]
Output: Second Smallest : -1
	Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
*/

#include<bits/stdc++.h>
using namespace std;
int second_smallest(vector<int>& arr, int n)
{
    if (n < 2) return -1;
    // Initialize smallest and second smaller
    int smallest = INT_MAX;
    int second_smaller=INT_MAX;
    for (int i=0; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            second_smaller = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smaller && arr[i] != smallest)
        {
            second_smaller = arr[i];
        }  
    }
    return second_smaller;
}
int second_largest(vector<int> &arr, int n)
{
    if(n<2) return -1;
    // Initialiaze largest and second largest
    int largest=INT_MIN;
    int second_larger=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_larger=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_larger && arr[i]!=largest)
        {
            second_larger=arr[i];
        }
    }
    return second_larger;
}

int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Second Smallest element in array is "<<second_smallest(arr, n)<<endl;
    cout<<"Seond  Largest element in array is "<<second_largest(arr, n)<<endl;
    return 0;
}