/*
Sliding window problem.
Given an array A and an integer K. Find the maximum for each and every contiguous subarray of size K.

Input:
The first line of input contains an integer T denoting the number of test cases. 
The first line of each test case contains a single integer N denoting the size of array and the size of subarray K. 
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

A naive approach is to use two for loops to keep track of the maximum element in the sliding window.
This would take O(n^2) time.

An efficient solution is to use the STL dequeue. The approach is to keep track of the index of the elements
in the window. Whenever we see elements greater than the current window, we will pop_out() all the elements
from the dequeue. If some smaller element is seen, we will push the smaller element into the dequeue.

Step 1: Push the elements upto current sliding window. If some larger element is found, pop_out() all the elements
from the dequeue.
Step 2: Check, if the first element is out of current window. If so, pop out the elements which are out of the current
window.
Step 3: Push, if the current element is smaller than the element inserted. If not, pop out all the elements from the 
dequeue. Print the elements.
*/ 

#include<bits/stdc++.h>
using namespace std;
void slidingWindowMaximum(vector<int> &v,int k)
{
	deque<int>dq;
	int size = v.size();
	for(int i=0;i<k;i++)
	{
		while(!dq.empty() && v[i]>=v[dq.back()])
		dq.pop_back();
		dq.push_back(i);
	}
	for(int i=k;i<size;i++)
	{
		//print the maximum in current window
		cout<<v[dq.front()]<<" ";
		//first check if the front element is out of current window
		while(!dq.empty() && dq.front()<=i-k)
		dq.pop_front();
		while(!dq.empty() && v[i]>=v[dq.back()])
		dq.pop_back();
		dq.push_back(i);
	}
	cout<<v[dq.front()]<<" "<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		slidingWindowMaximum(v,k);
	}
	return 0;
}
