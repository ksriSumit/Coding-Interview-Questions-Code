/*
Immediate smaller element in array.
The problem statement in this case is:
Given an integer array Arr of size N. For each element in the array, 
check whether the right adjacent element (on the next immediate position) of the array is smaller. 
If next element is smaller, update the current index to that element. 
If not, then  -1.
*/

#include<bits/stdc++.h>
using namespace std;
void immediateSmaller(vector<int> &v)
{
	int size = v.size();
	int max = -1;
	for(int i=0;i<size-1;i++)
	{
		if(v[i]>v[i+1]) v[i] = v[i+1];
		else v[i] = -1;
	}
	v[size-1] = -1; //there is no element to the right side of the last elemen. Hence, it is always -1
}
int main()
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
	immediateSmaller(v);
	for(int i=0;i<n;i++) cout<<v[i]<<" ";
	return 0;
}
