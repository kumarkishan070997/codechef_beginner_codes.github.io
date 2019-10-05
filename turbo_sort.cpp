#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,temp,size,a[20],swap;
	cout<<"Enter the number of elements you want to enter : ";
	cin>>size;
	cout<<"Enter the elements one by one : ";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<size-1;i++)
	{
		swap=0;
		for(j=0;j<(size-i)-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			swap=1;
			}
		}
		if(swap==0)
		{
			break;
		}
	}
	cout<<"\n Elements after sorting : \n";
	for(i=0;i<size;i++)
	{
		cout<<" "<<a[i];
	}
}
