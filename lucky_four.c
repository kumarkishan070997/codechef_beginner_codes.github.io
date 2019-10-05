#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,t,k=0,num,a[10],a1[10],count=0;
	char str[5];
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d\n",&num);
		tostring(str,num);
		for(j=i;j<strlen(str);j++)
		{
			if(a[i]=='4')
			{
				count++;
			}
		}
		a1[k]=count;
		count=0;
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",a1[i]);
	}
}
