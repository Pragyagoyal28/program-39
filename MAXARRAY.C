#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,min;
	 int arr[5];
	 clrscr();
	 for(i=0;i<5;i++)
	 {
		 printf("enter new id");

		 scanf("%d",&arr[i]);
	 }
		 for(i=0;i<5;i++)
	 {
		 if(arr[i]<min)
		 {
		 min=arr[i];

		 }
	 }

	 printf("\n%d",min);
	 getch();
}










