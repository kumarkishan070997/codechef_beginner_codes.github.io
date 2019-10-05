#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int len=str.length();
		int mid=len/2;
		string s1,s2;
		if(len%2==0)
		{
			for(int i=0;i<mid;i++)
			{
				s1=s1+str[i];
			}
			for(int j=mid;j<len;j++)
			{
				s2=s2+str[j];
			}
		}
		else
		{
			for(int i=0;i<mid;i++)
			{
				s1=s1+str[i];
			}
			for(int j=mid+1;j<len;j++)
			{
				s2=s2+str[j];
			}
		}
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		if(s1==s2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
