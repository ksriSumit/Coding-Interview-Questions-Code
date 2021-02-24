/*
Next Greater Element.
The problem statement for this is:
Given an array arr[ ] of size N having distinct elements, 
the task is to find the next greater element for each element of 
the array in order of their appearance in the array.
Next greater element of an element in the array is 
the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. 
For example, next greater of the last element is always -1.

The idea here is to use stack and traverse from the right end of the array.
The time complexity of this approach is O(n).
*/

#include<bits/stdc++.h>
using namespace std;
vector<long long> nextGreaterElement(vector<long long> &v)
{
	vector<long long>res;
	stack<long long>st;
	int size = v.size();
	st.push(v[size-1]);
	for(int i=size-2;i>=0;i--)
	{
		while(!st.empty() && st.top()<=v[i])
		st.pop();
		int greater = (st.empty()) ? -1 : st.top();
		res.push_back(greater);
		st.push(v[i]);
	}
	reverse(res.begin(),res.end());
	res.push_back(-1);
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long>v;
		for(long long i=0;i<n;i++)
		{
			long long x;
			cin>>x;
			v.push_back(x);
		}
		vector<long long>result = nextGreaterElement(v);
		vector<long long>:: iterator it;
		for(it=result.begin();it!=result.end();it++)
		{
			cout<<(*it)<<" ";
		}
	}
	return 0;
}
