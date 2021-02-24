/*
Previous Greater element Naive approach. Here the idea is to use two for loops.
The time compelxity of this approach is O(n^2)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
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
	for(int i=0;i<n;i++)
	{
		int j=i-1;
		for(j;j>=0;j--)
		{
			if(v[j]>v[i])
			{
				cout<<v[j]<<" ";
				break;	
			}	
		}
		if(j==-1) cout<<-1<<" ";
	}
	return 0;
}
