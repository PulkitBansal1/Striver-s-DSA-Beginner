/*
There’s an array ‘A’ of size ‘N’ with positive and negative elements (not necessarily equal). Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. The leftover elements should be placed at the very end in the same order as in array A.

Note: Start the array with positive elements.

Examples: 

Example 1:

Input:
arr[] = {1,2,-4,-5,3,4}, N = 6
Output:
1 -4 2 -5 3 4

Explanation: 

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
Leftover positive elements are 3 and 4 which are then placed at the end of the array.

Example 2:
Input:
arr[] = {1,2,-3,-1,-2,-3}, N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 

Positive elements = 1,2
Negative elements = -3,-1,-2,-4
To maintain relative ordering, 1 must occur before 2.
Also, -3 should come before -1, and -1 should come before -2.
After alternate ordering, -2 and -4 are left, which would be placed at the end of the ans array.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeelements(vector<int>& nums, int n)
{
    vector<int> pos, neg;  // two empty vectors to store positives and negatives
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
    if(pos.size()>neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++)
        {
            nums[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++)
        {
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++)
        {
            nums[index]=neg[i];
            index++;
        }
    }
    return nums;
}
int main()
{
    int n;
    cout<<"Enter hte size of array-> ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements f array--> ";
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