#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0,i,j;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[j]>arr[i])
				{
					count++;
				}
			}
			arr[i]=count;
			count=0;
		}
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<"\t";
		}
	}
	return 0;
}
