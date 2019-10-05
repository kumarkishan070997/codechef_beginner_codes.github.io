#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2,count=0;
		cin>>n1>>n2;
		int sum=n1+n2;
		sum=sum+1;
		while(1)
		{
			for(int i=2;i<sum;i++)
			{
				if(sum%i==0)
				{
					count++;
				}
			}
			if(count==0)
			{
				break;
			}
			sum=sum+1;
			count=0;
		}
		cout<<sum-(n1+n2)<<endl;
		count=0;
	}
	return 0;
}
