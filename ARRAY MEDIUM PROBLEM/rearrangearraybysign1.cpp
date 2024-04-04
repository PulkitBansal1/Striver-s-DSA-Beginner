/*
Problem Statement:

There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.

Examples: 

Example 1:

Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5

Explanation: 

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

Example 2:
Input:
arr[] = {1,2,-3,-1,-2,3}, N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 

Positive elements = 1,2,3
Negative elements = -3,-1,-2
To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
Also, -3 should come before -1, and -1 should come before -2.
*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH//
/*
vector<int> rearrangeelements(vector<int> nums, int n)
{
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
        {
            pos.push_back(nums[i]);
        }
        else
        {
            neg.push_back(nums[i]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
    }
    return nums;
}
*/

//OPTIMAL APPROACH//
vector<int> rearrangeelements(vector<int> nums, int n)
{
    vector<int> ans(n,0);
    int posIndex=0, negIndex=1;  //index of positive and negative array respectively
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0)
        {
            ans[negIndex]=nums[i];
            negIndex+=2;   //move to next position in the negative array
        }
        else
        {
            ans[posIndex]=nums[i];
            posIndex+=2;   //move to next position in the positive array
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of array--> ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> res = rearrangeelements(nums, n);
    cout<<"The rearranged array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}