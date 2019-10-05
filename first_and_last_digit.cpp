#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,i,j=0,arr[t],str1,str2;
	char str[50];
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>str;
//		len=strlen(str);
		str1=str[0];
		str2=str[1];
//		arr[j]=((int)str[0])+((int)str[1]);
		arr[j]=str1+str2;
		j++;
	}
	for(i=0;i<j;i++)
	{
		cout<<arr[i]<<endl;
	}
//	cout<<str[0];
	return 0;
}
