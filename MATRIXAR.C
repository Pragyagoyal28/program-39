#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0,r1=0,c1=0;
	int arr[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter new array element");
			scanf("%d",&arr[i][j]);
			sum=sum+arr[i][j];
			if(i==0)
			{
			r1=r1+arr[i][j];
			}
		}

	}
		printf("\nprinting matrix\n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
		printf("%d",arr[i][j]);
		}
		printf("\n");
		}
		printf("\nsum of all elememts:%d",sum);
		printf("\nsum of first row:%d",r1);
		getch();
}