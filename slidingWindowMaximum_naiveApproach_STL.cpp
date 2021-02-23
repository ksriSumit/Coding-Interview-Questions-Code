//sliding window maximum naive approach
//This approach would take O(n^2) time complexity
#include<bits/stdc++.h>
using namespace std;
void slidingWindowMaximum(vector<int> &v,int k)
{
	int size = v.size();
	for(int i=0;i<size-k+1;i++) //here in the for loop, we have to adjust the window size.
	{
		//set first element as maximum of current window and go on finding the maximum in the current window.
		int mx = v[i];
		for(int j=i+1;j<i+k;j++)
		{
			mx = max(v[j],mx);
		}
		cout<<mx<<" ";
	}
	cout<<"\n";
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
