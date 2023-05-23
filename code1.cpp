#include<stdio.h>
void main()
{
	int r=4;
	int i,j,k;
	for(i=1;i<r;i++)
	{
		for(j=1;j(r-i)-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<2*i+1;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
