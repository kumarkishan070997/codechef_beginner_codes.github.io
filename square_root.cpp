#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,a1[10],a2[10],i,j=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a1[i];
		a2[j]=sqrt(a1[i]);
		j++;
	}
	for(j=0;j<t;j++)
	{
		cout<<"\n"<<a2[j];
	}
	return 0;
}
