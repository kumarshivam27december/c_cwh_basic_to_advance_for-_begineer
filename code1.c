#include<stdio.h>
void main()
{
	int r=3;
	int c=1;
	int i,j,k;
	for(i=c;i<r;i++)
	{
		for(j=0;j<(r-i)-1;j++)
		{
			printf(" ");
		}
		for(k=c;k<2*i+1;k++)
		{
			printf("%d",i);
		}
		printf("\n");
		c++;
	}
	return 0;
}
