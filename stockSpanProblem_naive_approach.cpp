/*
This is the naive approach of the stockspan problem. The idea here is to use two for loops.
The time complexity of this approach would be O(n^2).
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {10,4,5,90,120,80};
	for(int i=0;i<6;i++)
	{
		int span = 1;
		for(int j=i-1;j>=0;j--)
		{
			if(arr[i]>=arr[j])
			span++;
			else
			break;
		}
		cout<<span<<" ";
	}
	return 0;
}
