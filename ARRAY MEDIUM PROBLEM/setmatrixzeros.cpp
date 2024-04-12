/*
Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

Examples
Examples 1:
Input:
 matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output:
 [[1,0,1],[0,0,0],[1,0,1]]

Explanation:
 Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
 
Input:
 matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:
[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:
Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0
*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH//
void mark_row(vector<vector<int>>&matrix, int n, int m, int i)
{
    for (int j = 0; j<m;j++)
    {
        if(matrix[i][j]!=0)
        {
            //Marking all elements in ith row as -1
            matrix[i][j]=-1;
        }
    }
}

void mark_coloumn(vector<vector<int>>&matrix, int n, int m, int j)
{
    for(int i=0;i<n;i++)
    {
       if(matrix[i][j]!=0)
       {
        matrix[i][j]=-1;
       }
    }
}

//Function to zero out rows and columns that contain a zero.
void zeroMatrix(vector<vector<int>>& matrix, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                mark_row(matrix,n,m,i);
                mark_coloumn(matrix,n,m,j);
            }
        }
    }
 // Finally, mark all -1 as 0:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(vector<vector<int>> matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}

int main()
{
    int n,m;
    cout<<"Enter the no. of rows--> ";
    cin>>n;
    cout<<"Enter the no. of coloumns--> ";
    cin>>m;

    vector<vector<int>> matrix(n, vector<int>(m));
    // Input elements of the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    zeroMatrix(matrix,n,m);
    cout << "\nModified Matrix: ";
    printMatrix(matrix,n,m);
    return 0;
}