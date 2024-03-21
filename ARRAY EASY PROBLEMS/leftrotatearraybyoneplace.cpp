/* 
Left Rotate the Array by One
Problem Statement: Given an array of N integers, left rotate the array by one place.

Examples
Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 2,3,4,5,1
Explanation: 
Since all the elements in array will be shifted 
toward left by one so ‘2’ will now become the 
first index and and ‘1’ which was present at 
first index will be shifted at last.


Example 2:
Input: N = 1, array[] = {3}
Output: 3
Explanation: Here only element is present and so 
the element at first index will be shifted to 
last index which is also by the way the first index.
*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE//
/*
void LeftRotate(vector<int>& arr,  int n) 
{
    vector<int> temp(n); //create a temporary array for storing values
    for(int i=1;i<n;i++)
    {
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}
*/

//OPTIMAL APPROACH
void LeftRotate(vector<int>& arr, int n)
{
    int temp=arr[0];   //store the value of first element
    for(int i=0;i<n;i++)
    {
        /*
            Shift all elements of the array to right by one position. 
            The last element becomes the first element.
        */
        arr[i] = arr[(i+1)]; 
    }
    arr[n-1] = temp;      //add the stored value (first element) to the last position.
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array--> ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //CAlling Function
    cout<<"The rotated array is : ";
    LeftRotate(arr,n);
    
    return 0;
}