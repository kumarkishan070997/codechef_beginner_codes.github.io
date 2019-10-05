#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int base;
		cin>>base;
		if(base==1 || base==2 || base==3)
		{
			cout<<"0"<<endl;
		}
		else
		{
		if(base%2==0)
			{
				int area=0.5*base*base;
				int result=(area-base)/4;
				cout<<result<<endl;
			}
			else
			{
				base=base-1;
				int area=0.5*base*base;
				int result=(area-base)/4;
				cout<<result<<endl;
			}}
	}
	return 0;
}
