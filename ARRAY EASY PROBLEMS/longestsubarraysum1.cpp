/*
Longest Subarray with given Sum K(Positives)
Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

Examples

Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

Example 2:
Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
Result: 3
Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.

*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH//

int  maxLengthSubArrayWithGivenSum(vector<int> arr, int n, int k)
{
    int len=0; //length of the longest subarray
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}
int main()
{
    int n;
    cout<<"ENter the size of array--> ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of K --> ";
    cin>>k;
    cout<<"The length longest subarray with sum "<<k<<" is--> "<<maxLengthSubArrayWithGivenSum(arr,n, k)<<endl;
    return 0;
}