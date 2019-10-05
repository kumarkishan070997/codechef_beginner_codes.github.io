#include<iostream>
using namespace std;
int main()
{
	int t,i,n;
	cin>>t;
	while(t--)
	{
		int sum=0;
		cin>>n;
		for(i=1;i<n;i++)
		{
			n=n-i;
			sum++;
			if(n<0)
			{
			break;}
		}
			cout<<sum<<endl;
			sum=0;
	}

	return 0;
}
