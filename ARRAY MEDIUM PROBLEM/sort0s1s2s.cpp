/*
Sort an array of 0s, 1s and 2s
Problem Statement: Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Examples
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]

Input: nums = [0]
Output: [0]

*/


#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE//
/*void sortvector(vector<int> &nums,int n)
{
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            cnt0++;
        }
        else if (nums[i]==1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    for(int i=0;i<cnt0;i++)
    {
        nums[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++)
    {
        nums[i]=1;
    }
    for(int i=cnt0+cnt1;i<n;i++)
    {
        nums[i]=2;
    }
}*/

//OPTIMAL APPROACH//

void sortvector(vector<int> &nums, int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
//Print function
void printVector(vector<int>& nums,int n)
{
    for(int i = 0 ;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}
//Driver's code
int main()
{
    int n;
    cout<<"Enter the size of array--> ";
    cin>>n;
    vector <int> nums(n);   //Declare a dynamic array with given size
    cout<<"Enter the elements of array(only 0's,1's and 2's--> ";
    for(int i=0;i <n;i++)
    {
        cin>>nums[i];
    }
    sortvector(nums,n);     //Sorting the array using custom sorting function
    cout<<"\nThe sorted array is: \t";
    printVector(nums,n);      //Printing the sorted array
    return 0;
}