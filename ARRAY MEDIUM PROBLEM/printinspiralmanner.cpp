/*
Problem Statement: Given a Matrix, print the given matrix in spiral order.

Examples:

Example 1:
Input: Matrix[][] = { { 1, 2, 3, 4 },
		      { 5, 6, 7, 8 },
		      { 9, 10, 11, 12 },
	              { 13, 14, 15, 16 } }

Outhput: 1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10.
Explanation: The output of matrix in spiral form.

Example 2:
Input: Matrix[][] = { { 1, 2, 3 },
	              { 4, 5, 6 },
		      { 7, 8, 9 } }
			    
Output: 1, 2, 3, 6, 9, 8, 7, 4, 5.
Explanation: The output of matrix in spiral form.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> mat, int n, int m)
{
    int left=0, right=m-1;
    int top=0, bottom=n-1;

    vector<int> ans;
    while(left<=right && top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            ans.push_back(mat[top][i]); // push the element from top row to answer array
        }
        top++; // move downwards
        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(mat[i][right]); // push the element from rightmost column to answer array
        }
        right--; // move upward
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                ans.push_back(mat[bottom][i]); // push the element from bottom row to answer array
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(mat[i][left]); // push the element from leftmost column to answer array
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    int n,m;
    cout<<"Enter the number of rows--> ";
    cin>>n;
    cout<<"Enter the coloumns--> ";
    cin>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    cout<<"Enter the elements of the matrix--> "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    vector<int> ans=spiralMatrix(mat,n,m);
    cout<<"The spiral matrix is--> ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}