#include<iostream>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		long long int num;
		cin>>num;
		for(int i=2;i<num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			cout<<"yes"<<endl;
		}
		else
		cout<<"no"<<endl;
	}
	return 0;
}
