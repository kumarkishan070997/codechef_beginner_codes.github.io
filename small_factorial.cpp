#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
	int n,i,arr[10],j=0,k,num;
	long f=1;
	cin>>n;
	if(n>=1 && n<=100)
	{
		for(i=0;i<n;i++)
		{
			cin>>num;
			if(num>=1 && num<=100)
			{
				for(k=1;k<=num;k++)
				{
					f*=k;
				}
			}
			arr[j]=f;
			f=1;
			j++;
		}
	}
	for(j=0;j<n;j++)
	{
		cout<<arr[j]<<endl;
	}
	return 0;
}
