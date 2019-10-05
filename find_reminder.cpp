#include<iostream>
using namespace std;
int main()
{
	int i,n,rem,j=0,arr1[10],num1,num2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num1;
		cin>>num2;
		rem=num1%num2;
		arr1[j]=rem;
		j++;
	}
	for(i=0;i<j;i++)
	{
		cout<<arr1[i]<<endl;
	}
	return 0;
}
