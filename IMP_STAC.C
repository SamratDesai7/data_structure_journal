#include<stdio.h>
#include<conio.h>
#define maxsize 6
void main()
{
	int i,a[maxsize]={27,56,7,17,36,98};
	clrscr();
	printf("\nimplimentation of stack is as follows:\n");
	for(i=0;i<=maxsize-1;i++)
	{
	printf("\n%d",a[i]);
	}
	getch();
}