#include<iostream>
using namespace std;
int main()
{
	int i,n1,n2,max,t,gcd;
	cin>>t;
	while(t--)
	{
		cin>>n1>>n2;
		max=(n1>n2)?n1:n2;
		for(i=1;i<=n1 && i<=n2;i++)
		{
			if(n1%i==0 && n2%i==0)
			{
				gcd=i;
			}
		}
		cout<<gcd;
		while(1)
		{
			if(max%n1==0 && max%n2==0)
			{
				cout<<" "<<max<<endl;
				break;
			}
			++max;
		}
	}
	return 0;
}
