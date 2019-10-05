//level == DIFFICULT

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,size,n1=0,n2=1,n3,i,k=2,n;
		cin>>n;
		int arr[n];
		arr[0]=n1;
		arr[1]=n2;
		for(i=2;i<n;i++)
		{
			arr[k]=n1+n2;
			n1=n2;
			n2=arr[k];
			k++;
		}
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<"\t";
		}
		cout<<endl;
		for(i=0;i<n;i++)
		{
			while(arr[i]>9)
			{
				arr[i]=arr[i]%10;
				if(arr[i]>0 && arr[i]<=9)
				{
					break;
				}
			}
		}
		size=sizeof(arr)/sizeof(arr[0]);
		if(size%2==0)
		{
			cout<<arr[n-1]<<endl;
		}
		else
		cout<<arr[n-2]<<endl;
	return 0;
}
