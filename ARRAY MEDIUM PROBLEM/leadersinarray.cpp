/*
Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.

Examples
Example 1:
Input:

 arr = [4, 7, 1, 0]
Output
:
 7 1 0
Explanation:

 Rightmost element is always a leader. 7 and 1 are greater than the elements in their right side.

Example 2:
Input:

 arr = [10, 22, 12, 3, 0, 6]
Output:

 22 12 6
Explanation:

 6 is a leader. In addition to that, 12 is greater than all the elements in its right side (3, 0, 6), also 22 is greater than 12, 3, 0, 6.
*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH//
/*vector<int> leadersarray(vector<int> nums, int n)
{
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        bool leader=true;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j] >= nums[i])
            {
                leader=false;
                break;
            }
        }
        if(leader)
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
*/
//OPTIMAL APPROACH//
vector<int> leadersarray(vector<int> nums, int n)
{
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(nums[i]>maxi)
        {
            ans.push_back(nums[i]);
        }
        maxi=max(maxi,nums[i]);
    }
    reverse(ans.begin(),ans.end());
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
    vector<int> res = leadersarray(nums, n);
    cout<<"The Leader Elements are: ";
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}