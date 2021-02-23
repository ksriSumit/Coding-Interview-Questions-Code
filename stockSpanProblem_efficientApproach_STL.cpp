/*
Stock span problem.
The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span 
of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which 
the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values 
for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

An efficient approach to solve the stock span problem is to use the stack data structure.
This would give us the time complexity of O(n).
By looking at the code one might think that the time complexity of the approach is O(n^2). But analysis yeilds that
the time complexity of the approach is O(n).

The main idea here is to use the stack. If the top of the stack contains smaller element than the current element to be inserted
then we will pop_out the stack until we find an element which is greater than the current element. If smaller element is found, we will
leave the stack as it is and insert the current element on the top of the stack.

Here we will push the index of the elements into the stack rather than the elements itself.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> stockSpanProblem(vector<int> &price)
{
	int size = price.size();
	vector<int> result;
	stack<int>st;
	st.push(0); //pushing the first index into the stack
	for(int i=0;i<size;i++)
	{
		while(!st.empty() && price[st.top()]<=price[i]) //check if the top element is smaller than the current element to be inserted.
		st.pop(); //pop until some greater element is found in the stack.
		int span = (st.empty())?(i+1):(i-st.top()); //this will give us our desired result. If the stack is empty, the current element
												  //to be inserted will become the span of the list.
		st.push(i);
		result.push_back(span);
	}
	return result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		vector<int>res = stockSpanProblem(v);
		vector<int>::iterator it;
		for(it=res.begin();it!=res.end();it++)
		{
			cout<<(*it)<<" ";
		}
	}
	return 0;
}
