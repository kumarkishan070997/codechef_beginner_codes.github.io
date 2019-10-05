#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,k,i,j,count=0;
	long num1;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>num1;
		if(num1%k==0)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
