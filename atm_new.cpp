#include<iostream>
using namespace std;
int main()
{
	int n1,n2,k,i,t;
	cin>>t;
	while(t--)
	{
	cin>>n1>>n2;
	for(i=0;i<n1;i++)
	{
		 cin>>k;
		 if(n2>=k)
		 {
		 	n2=n2-k;
		 	cout<<"1";
		 }
		 else
		 {
		 	//n2=n2-k;
		 	cout<<"0";
		 }
	}
	cout<<endl;
	}
	return 0;
}
