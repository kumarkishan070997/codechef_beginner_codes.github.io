#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char num[10];
		cin>>num;
		char res[10];
		strcpy(res,num);
		strrev(num);
		if(strcmp(res,num)==0)
		{
			cout<<"wins"<<endl;
		}
		else
		{
		cout<<"losses"<<endl;
		}
	}
	return 0;
}
