/*
One of the importatnt application of queue data structure is to generate numbers.
Example problem statement can be:
Given a number n, print first n numbers (in increasing order) in non-decreasing order such that all these numbers have digits
{5,6}.
The idea here is to use queue data structure. Queue operates in FIFO manner. First-In First-out.
The code is given below.
The approach takes a space complexity of O(n) and time complexity of O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<string>q;
	q.push("5");
	q.push("6");
	for(int i=0;i<10;i++)
	{
		string curr = q.front();
		cout<<curr<<" ";
		q.pop();
		q.push(curr+"5");
		q.push(curr+"6");
	}
	return 0;
}
