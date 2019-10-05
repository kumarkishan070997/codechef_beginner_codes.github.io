#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		int arr[num];
			for(int i=0;i<num;i++)
			{
				cin>>arr[i];
			}
		
		sort(arr,arr+num);
		cout<<arr[0]+arr[1]<<endl;
	}
	return 0;
}
