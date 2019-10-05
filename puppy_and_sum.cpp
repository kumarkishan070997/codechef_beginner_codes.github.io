#include<iostream>
using namespace std;
int main()
{
	int i,t;
	cin>>t;
	while(t--)
	{
		int n,num,sum=0;
		cin>>n>>num;
		while(n--)
		{
			for(i=1;i<=num;i++)
			{
				sum=sum+i;
			}
			num=sum;
			sum=0;
		}
		cout<<num<<endl;
		num=0;
	}
}
