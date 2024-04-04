/*
Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Examples
Example 1:
Input:
 arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output:
 6 

Explanation:
 [4,-1,2,1] has the largest sum = 6. 

Examples 2:
Input:
 arr = [1] 

Output:
 1 

Explanation:
 Array has only one element and which is giving positive sum of 1. 
*/

#include<bits/stdc++.h>
using namespace std;
int maximumsubarraysum(vector<int> nums, int n)
{
    int maxim=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
        maxim=max(maxim,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return  maxim;
}
int main()
{
    int n;
    cout<<"Enter the size of array--> ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements of array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"Maximum subarray sum is --> "<<maximumsubarraysum(nums, n);
    return 0;
}