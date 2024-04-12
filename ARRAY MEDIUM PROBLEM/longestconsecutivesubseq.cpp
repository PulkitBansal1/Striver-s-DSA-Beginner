/*
Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.

Examples
Example 1:
Input:
 [100, 200, 1, 3, 2, 4]

Output:
 4

Explanation:
 The longest consecutive subsequence is 1, 2, 3, and 4.

Input:
 [3, 8, 5, 7, 6]

Output:
 4

Explanation:
 The longest consecutive subsequence is 5, 6, 7, and 8.
*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH//
/*
bool linearSearch(vector<int> nums, int num, int n)
{
    for(int i=0;i<n;i++)
    {
        if(num == nums[i]) return true;
    }
    return false;
}

int printLongestConsecutiveSubsequenceLength(vector<int> nums, int n)
{
    int longest=1;
    for(int i=0;i<n;i++)
    {
        int x=nums[i];
        int cnt=1;
        while(linearSearch(nums,x+1,n))
        {
            x=x+1;
            cnt=cnt+1;
        }
        longest=max(longest,cnt);
    }
    return longest;
}
*/

//BETTER SOLUTION//
int longestconsecutiveseq(vector<int> nums ,int n)
{
    if (n == 0) return 0;
    int longest=1,cntcurrnt=0,lastsmaller=INT_MIN;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        if(nums[i]-1==lastsmaller)
        {
            cntcurrnt=cntcurrnt+1;
            lastsmaller=nums[i];
        }
        else if(nums[i]!=lastsmaller)
        {
            cntcurrnt=1;
            lastsmaller=nums[i];
        }
        longest=max(longest,cntcurrnt);
    }
    return longest;
}

int main()
{
    int n;
    cout<<"Enter the no. of elements in an array---> ";
    cin>>n;
    vector<int> nums(n);
    cout<<"\nEnter Elements of Array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"\nThe Length of Longest Consecutive Subsequence is: "<<longestconsecutiveseq(nums,n);
    return 0;
}