#include<stdio.h>
#include<conio.h>
void main()
{
	int a[6]={56,23,12,20,5,15};
	int i,j,temp;
	clrscr();
	printf("unsorted arrey is:");
	for(i=0;i<6;i++)
	{
	printf("\n%d",a[i]);
	}
	for(i=1;i<6;i++)
	{
	 temp=a[i];
	 j=i-1;
		while(j>=0 && a[j]>temp)
		{
		 a[j+1]=a[j];
		 j--;
		}
		a[j+1]=temp;
	}
	printf("\n sorted list:");
	for(i=0;i<6;i++)
	{
	printf("\n%d",a[i]);
	}
	getch();
}