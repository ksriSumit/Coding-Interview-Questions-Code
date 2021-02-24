/*
Previous greater element.
the problem statement for this one is:
Given an array of distinct integer, find closest (postitoin-wise) greater integer on left of every element
If there is no greater element on the left of it, print -1 for that one.
An efficient approach for this one is to use a stack. And push the elemnt into the stack.
If the top of the stack is greater than the element being pushed, print the top of the stack.
If the top of the stack is smaller than the element being pushed, pop the elements from the stack one by one
until there is no element left.
Looking at the code one might think that, the program is taking O(n^2) approach. But on closer analysis, we will get that
the code is taking O(n) time.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> previousGreaterElement(vector<int> &v)
{
	stack<int>st;
	vector<int>result;
	st.push(v[0]);
	for(int i=0;i<v.size();i++)
	{
		while(!st.empty() && st.top()<=v[i])
		st.pop();
		int max = (st.empty()) ? -1 : st.top();
		result.push_back(max);
		st.push(v[i]);
	}
	return result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int>v;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		vector<int>res = previousGreaterElement(v);
		vector<int>:: iterator it;
		for(it=res.begin();it!=res.end();it++)
		cout<<(*it)<<" ";
	}	
	return 0;
}
