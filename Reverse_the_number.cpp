#include<iostream>
using namespace std;
class reverse
{
	public:
	void fun()
	{
	int n,num,rev=0;
	int t,i,j=0;
	cin>>t;
	while(t--)
	{
		cin>>num;
		while(num!=0)
		{
			rev=rev*10;
			rev=rev+num%10;
			num/=10;
		}
		cout<<rev<<endl;
		rev=0;
	}
//	for(j=0;j<t;j++)
//	{
//		cout<<arr2[j]<<"\n";
//	}
	}
};
int main()
{
	reverse obj;
	obj.fun();
	return 0;
}
