#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double p,q,res,m1,m2;
		cin>>q;
		cin>>p;
		if(q>1000)
		{
			m1=q*p;
			m2=m1*0.1;
			res=m1-m2;
			cout<<res<<endl;
		}
		else
		{
			res=(q*p);
			cout<<res<<endl;
		}
	}
	return 0;
}
