/*
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed
direction.
The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, 
you are the last one remaining and survive.

This is a simple recursion based solution in O(n) time.
*/

#include<bits/stdc++.h>
using namespace std;
int josephus(int n,int k)
{
	if(n==1) //base condition when only one person is surviving
	return 1;
	else return ((josephus(n-1,k)+k-1)%n+1);
}
int main()
{
	int n=5;
	int k=2;
	cout<<josephus(n,k);
	return 0;
}
