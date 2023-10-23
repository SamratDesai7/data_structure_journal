#include<stdio.h>
#include<conio.h>
#define maxsize 5
void main()
{
	int i,a[maxsize];
	clrscr();
	printf("Enter the 5 stack elements you want:\t");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nimplimentation of stack is as follows:\n");
	for(i=0;i<=maxsize-1;i++)
	{
	printf("\n%d",a[i]);
	}
	getch();
}