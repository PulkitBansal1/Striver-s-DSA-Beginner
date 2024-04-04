/*
Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Examples
Example 1:
Input:
 prices = [7,1,5,3,6,4]
Output:
 5
Explanation:
 Buy on day 2 (price = 1) and 
sell on day 5 (price = 6), profit = 6-1 = 5.

Note
: That buying on day 2 and selling on day 1 
is not allowed because you must buy before 
you sell.

Example 2:
Input:
 prices = [7,6,4,3,1]
Output:
 0
Explanation:
 In this case, no transactions are 
done and the max profit = 0.
*/

#include<bits/stdc++.h>
using namespace std;

int besttime(vector<int> prices, int n)
{
    int mini=prices[0];
    int maxprofit=0;
    for(int i=1;i<n;i++)
    {
        int cost=prices[i]-mini;
        maxprofit=max(cost,maxprofit);
        mini=min(mini, prices[i]);
    }
    return maxprofit;
}
int main()
{
    int n;
    cout<<"Enter the number of days--> ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter the price array--> ";
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    cout<<"The maximum possible profit can be made by buying and selling at right times is--> "<<besttime(prices,n);
    return 0;
}