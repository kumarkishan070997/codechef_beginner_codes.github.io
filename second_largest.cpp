#include<iostream>
using namespace std;
int main()
{
	int i,j=0,k,l=0,m=0,t;
	long a[20],a2[20],temp;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a[j];
		cin>>a[j+1];
		cin>>a[j+2];
		for(k=0;k<3;k++)
		{
			temp=a[k];
			l=k-1;
			while(l>=0 && a[l]>temp)
			{
				a[l+1]=a[l];
				l--;
			}
			a[l+1]=temp;
		}
		a2[m]=a[i+1];
		m++;
	}
	cout<<"\n";
	for(i=0;i<t;i++)
	{
		cout<<a2[i]<<"\n";
	}
	return 0;
}
