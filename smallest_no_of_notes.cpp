#include<iostream>
using namespace std;
int main()
{
	int t,i,a[6]={1,2,5,10,50,100};
	cin>>t;
	while(t--)
	{
		int count=0;
		long n;
		cin>>n;
			count=count+n/100;
			n=n%100;
			count=count+n/50;
			n=n%50;
			count=count+n/10;
			n=n%10;
			count=count+n/5;
			n=n%5;
			count=count+n/2;
			n=n%2;
			count=count+n/1;
			n=n%1;
			count=count+n;
			cout<<count<<endl;
			
	}
	return 0;
}
