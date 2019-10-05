#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		int sum=0;
		while(n)
		{
			sum=sum+n%10;
			n=n/10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
