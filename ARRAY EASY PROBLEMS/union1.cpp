/* Union of Two Sorted Arrays
Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

The union of two arrays can be defined as the common and distinct elements in the two arrays.NOTE: Elements in the union should be in ascending order.

Example 1:
Input:
n = 5,m = 5.
arr1[] = {1,2,3,4,5}  
arr2[] = {2,3,4,4,5}
Output:
 {1,2,3,4,5}

Explanation: 
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5} 

Example 2:
Input:
n = 10,m = 7.
arr1[] = {1,2,3,4,5,6,7,8,9,10}
arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation: 
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12} 
*/

#include<bits/stdc++.h>
using namespace std;

/* BRUTE FORCE METHOD */
vector<int> unionOfTwoSortedArrays(vector<int>& nums1, vector<int>& nums2, int  n, int m)  
{  
    // Create a set to store the unique elements from first array
    set<int> st;
    for(int i=0;i<n;i++)
    {
        // inserting the elements of the first array into the set
        st.insert(nums1[i]);
    }
    for(int  i=0;i<m;i++)
    {
        // inserting the elements of the second array into the set
        st.insert(nums2[i]);
    }
    vector<int> res;
    for(auto it: st)
    {
        // inserting the elements from the set to the results vector
        res.push_back(it);
    }
    return res;
}
void print_array(vector<int> res)
{
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}
int main()
{
    // Input size of the first array
    int n;
    cout<<"ENter the size of first array-> ";
    cin>>n;

    // Initialize the first array
    vector<int> nums1(n);
    cout<<"Enter the elements of first array in sorted order--> ";
    for(int  i=0;i<n;i++)
    {
        // Read input for the first array elements
        cin>>nums1[i];
    }

    // Input size of the second array
    int m;
    cout<<"Enter the size of second arrray-> ";
    cin>>m;

    // Initialize the second array
    vector<int> nums2(m);
    cout<<"Enter the elements of second array in sorted order--> ";
    for(int i=0;i<m;i++)
    {
        // Read input for the second array elements
        cin>>nums2[i];
    }

    // Calculate the union of the two arrays
    vector<int> res = unionOfTwoSortedArrays(nums1, nums2, n, m);

    // Print the result
    cout<<"The Union of two arrays is : ";
    print_array(res);
    return 0;
}