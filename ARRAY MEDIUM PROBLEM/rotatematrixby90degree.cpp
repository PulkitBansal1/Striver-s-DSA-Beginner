/*
Problem Statement: Given a matrix, your task is to rotate the matrix 90 degrees clockwise.

Examples
Example 1:
Input:
 [[1,2,3],[4,5,6],[7,8,9]]

Output
: [[7,4,1],[8,5,2],[9,6,3]]

Explanation:
 Rotate the matrix simply by 90 degree clockwise and return the matrix.

Example 2:
Input:
 [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

Output:
[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

Explanation:
 Rotate the matrix simply by 90 degree clockwise and return the matrix

*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH//
/*
vector<vector<int>> rotate(vector<vector<int>>& mat)
{
    int n=mat.size();
    vector<vector<int>> rotated(n, vector<int>(n,0)); //  create an empty n*n matrix
    
    for (int i = 0; i < n; i++)    // Traverse through each row one by one
    {                    
        for (int j = 0; j < n;j++)
        {
            rotated[j][n-i-1] = mat[i][j];  // Assign element of same position in the next row in the new matrix
        }
    }
    return rotated;
}
int main()
{
    int n;
    cout<<"Enter the number of rows nad coloumns ";
    cin>>n;
    vector<vector<int>> mat(n,vector<int>(n));
    cout<<"Enter the elements of  the matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    vector<vector<int>> res=rotate(mat);
    cout<<"The rotated Matrix is : "<<endl;
    for(auto i:res)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
*/

//OPTIMAL APPROACH//
void  rotate(vector<vector<int> > &mat,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(mat[i].begin(),mat[i].end());
    }
}
void printMatrix(vector<vector<int>> &mat, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " "; // Add a space after each element
        }
        cout << endl; // Move to the next line after printing each row
    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows and coloumns--> ";
    cin>>n;
    vector<vector<int>> mat(n,vector<int>(n));
    cout<<"Enter the elements of matrix-->\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j] ;
        }
    }
    cout<<"\nThe given Matrix is: \n";
    printMatrix(mat,n);
    cout<<"\nAfter Rotation:\n";
    rotate(mat,n);
    printMatrix(mat,n);
    return 0;
}