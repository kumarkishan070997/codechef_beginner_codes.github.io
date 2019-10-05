#include<iostream>
using namespace std;
int main()
{
	int t,max=0,i,p,a=0,b=0,c,d;
		cin>>t;
		for(i=0;i<t;i++)
		{
			cin>>c;
			cin>>d;
			a+=c;
			b+=d;
			if(max<=a-b)
			{
				p=1;
				max=a-b;
			}
			else if(max<=b-a)
			{
				p=2;
				max=b-a;
			}
		}
	cout<<p<<" "<<max;
	return 0;
}
