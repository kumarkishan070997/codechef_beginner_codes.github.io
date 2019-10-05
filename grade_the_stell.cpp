#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int hard,ten;
		float carbon;
		cin>>hard>>carbon>>ten;
		if(hard>50 && carbon<0.7 && ten>5600)
		{
			cout<<"10"<<endl;
		}
		else if(hard>50 && carbon<0.7)
		{
			cout<<"9"<<endl;
		}
		else if(carbon<0.7 && ten>5600)
		{
			cout<<"8"<<endl;
		}
		else if(hard>50 && ten>0.7)
		{
			cout<<"7"<<endl;
		}
		else if(hard>50 || carbon<0.7 || ten>5600)
		{
			cout<<"6"<<endl;
		}
		else
		{
			cout<<"5"<<endl;
		}
	}
	return 0;
}
