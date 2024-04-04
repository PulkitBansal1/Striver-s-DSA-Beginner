/* Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

Examples
Example 1:
Input Format
: N = 3, nums[] = {3,2,3}
Result
: 3
Explanation
: When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 

Example 2:
Input Format:
  N = 7, nums[] = {2,2,1,1,1,2,2}

Result
: 2

Explanation
: After counting the number of times each element appears and comparing it with half of array size, we get 2 as result.

Example 3:
Input Format:
  N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}

Result
: 4
*/

#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE//
/*
int majorityelement(vector<int> nums, int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            return  nums[i];
        }
    }
    return -1;
}
*/

//BETTER SOLUTION//
/*
int majorityelement(vector<int> nums, int n)
{
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[nums[i]]++;
    }
    for(auto it: mpp)
    {
        if(it.second>n/2)
        {
            return it.first;
        }
    }
    return -1;
}*/

//OPTIMAL SOLUTION//
int majorityelement(vector<int> nums, int n)
{
    int cnt=0;
    int el;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=nums[i];
        }
        else if(nums[i]==el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==el)
        {
            cnt1++;
        }
    }
    if(cnt1>n/2)
    {
        return el;
    }
    else{
        return -1;
    }
}
int main()
{
    int n;
    cout<<"ENter the size of array--> ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"The Majority element is --> "<<majorityelement(nums,n);
    return 0;
}