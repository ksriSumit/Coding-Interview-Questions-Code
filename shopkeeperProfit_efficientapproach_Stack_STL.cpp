/*
Shopkeeper profit problem. Medium level problem frequently asked in the interviews.
The problem statement here is:
Ram makes a plan for the new year. He decides to sell the products and writes down the price for n days. 
The prices are denoted by a list V of size n. Looking at the sequence he decides that for the product i, 
he is going to get a profit that equals to Vj-Vi, where j is the lowest index greater than i and Vj>=Vi. 
If there is no such j then his profit will be equal to Vi. Find the total profit of Ram.

The approach here is to use stack to keep track of the prices and calculate the profit.
The time complexity of this approach is O(n)

*/

#include<bits/stdc++.h>
using namespace std;
int shopkeeperProfit(vector<int> &v)
{
	int profit = 0;
	stack<int>st;
	for(int i=0;i<v.size();i++)
	{
		if(st.empty()) st.push(v[i]);
		else
		{
			while(!st.empty() && st.top()<=v[i])
			{
				profit+=v[i]-st.top();
				st.pop();
			}
			st.push(v[i]);
		}
	}
	while(!st.empty())
	{
		profit+=st.top();
		st.pop();
	}
	return profit;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>price;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			price.push_back(x);
		}
		int finalProfit = shopkeeperProfit(price);
		cout<<finalProfit<<" ";
	}	
	return 0;
}
