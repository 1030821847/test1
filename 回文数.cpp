#include<stdio.h>
int main()
{
	int input;
	int ori;
	scanf("%d",&input);
	for (int i=0;i<=input;i++)
	{
		int jud=0;
		ori=i;
		while(ori)
		{
			jud=jud*10+ori%10;
			ori/=10;
		}
		if (i==jud)printf("%d\t",i);
	}
	return 0;
} 