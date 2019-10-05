#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n1,n2,n3,sub,div;
		cin>>n1>>n2>>n3;
		if(n1>n2)
		{
			sub=n1-n2;
			if(sub>=n3)
			{
				n2=n2+n3;
			}
			else
			{
				div=n3/2;
				n1=n1+div;
				n2=n2+(n3-div);
			}
			
			cout<<n1-n2<<endl;
		}
		else
		{
			sub=n2-n1;
			if(sub>=n3)
			{
				n1=n1+n3;
			}
			else
			{
				div=n3/2;
				n2=n2+div;
				n1=n1+(n3-div);
			}
			
			cout<<n2-n1<<endl;
		}
	}
}
