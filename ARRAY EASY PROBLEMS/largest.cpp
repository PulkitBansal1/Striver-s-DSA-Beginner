/* Find the Largest element in an array
Problem Statement: Given an array, we have to find the largest element in the array. 

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array.
*/

#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>&arr, int n)
{
    // Initialize maximum element
    int max_elem = arr[0];
  
    for (int i=1; i < n; i++)
        if (max_elem < arr[i])
        {
            max_elem = arr[i];
        }
    return max_elem;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // Finding the largest element using max_element function
    cout << "Largest element in the given array is: " << largest(arr, n);
    return 0;
}

