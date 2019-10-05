#include<iostream>
using namespace std;
int main()
{
	double test_case;
	double num1,num2;
	int count,count1,res1,res2,res3;
	int arr[20],p=0;
	cin>>test_case;
	if(test_case>=1 && test_case<=1000)
	{
		for(count=0;count<test_case;count++)
		{
			cin>>num1;
			cin>>num2;
			if(num1>=1 && num1<=10000 && num2>=1 && num2<=10000)
			for(count1=count;count1<test_case;count1++)
			{
				arr[count1]=num1+num2;
	//			p++;
			}
		}
		for(count=0;count<test_case;count++)
		{
			cout<<arr[count]<<endl;
		}
	}
//	cout<<res1<<endl<<res2<<endl<<res3;
	return 0;
}
