/* 
Find the missing number in an array
Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.
*/

#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH //

void missing_number(vector<int> arr, int n)
{
    sort(arr.begin(),arr.end()) ; //Sorting the given array
    
    for (int i =  0; i < n; i++) {
        if (i+1 != arr[i]) {
            cout << "The missing number is : "<< i + 1 << endl;
            return;
        }
    }
}


//OPTIMAL APPROACH //
void missing_number(vector<int> arr, int n)
{
    int sum=(n*(n+1))/2; //Sum of all numbers from 1 to n
    int s=0;          //Sum of elements in the array

    for (int i = 0; i < n-1; i++) {
        s += arr[i];
    }
    cout << "The missing number is: " << abs(sum-s) << endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array--> ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    missing_number(arr,n);
    return 0;
}
