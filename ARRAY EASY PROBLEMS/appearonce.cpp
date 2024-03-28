/*Find the number that appears once, and the other numbers twice
Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Examples
Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.
*/

#include<bits/stdc++.h>
using namespace std;
int findNumberAppearingOnce(vector<int> nums, int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
    }
    for(auto it: mp)
    {
        if(it.second==1)
        {
            return  it.first;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of vector--> ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements of vector--> ";
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int res = findNumberAppearingOnce(vec, n);
    (res == -1)?cout<<"No number appears only once in the given array."<<endl:\
                cout<<"The number that appears only once in the given array is "<<res<<endl;
    return 0;
}