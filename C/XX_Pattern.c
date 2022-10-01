#include<stdio.h>
int main()
{
	int x,i,j;
	scanf("%d",&x);
	for(i=1;i<=x*2;i++)
	{
		for(j=0;j<x*4+2;j++)
		{
			if(j==0 || j==(x*4+1) ){
				
			printf("\"");
			}
			else if(j==(x*4-i+1)|| j==(x*2-i+1))
			printf("/");
			else if(j==i || j==(x*2+i))
			printf("%c",92);
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
