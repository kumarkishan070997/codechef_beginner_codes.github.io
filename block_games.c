#include<stdio.h>
#include<string.h>
//using namespace std;
int main()
{
	int t;
	char res[10];
	char num[10];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&num);
		strcpy(res,num);
		strrev(num);
		if(strcmp(res,num)==0)
		{
			printf("\nwins\n");
		}
		else
		{
		printf("losses");
		}
	}
	return 0;
}
