#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
push(int);
isfull();
show();
isempty();
peek();

void main()
    {
	int ch, item;
	clrscr();
	while(1)
	    {
	    printf("Different choices are:\n");
	    printf("1.push\n");
	    printf("2.pop\n");
	    printf("3.peek\n");
	    printf("4.show\n");
	    printf("5.exit\n");
	    printf("enter your choice: ");
	    scanf("%d",&ch);
	    printf("your choice was: %d\n",ch);
		switch(ch)
		    {
			case 1:
				printf("enter element for push:");
				scanf("%d",&item);
				push(item);
				break;
			case 2: printf("pop command is given\n");
				pop();
				break;
			case 3: peek();
				break;
			case 4: traverse();
				break;
			case 5: exit(0);
			default: printf("invalid input\n");
		    }
		printf("\n");
		}
	}

    push(int ele)
	{
	if(isfull())
	    {
		printf("stack is overflow\n");
	    }
	else
	    {
	    top++;
	    stack[top]=ele;
	    printf("pushed element is %d\n",stack[top]);
	    }
	return(0);
	}

  isfull()
   {
     if(top==CAPACITY-1)
      {
       return 1;
      }
     else
      {
     return 0;
      }
   }

    traverse()
    {
	if(isempty())
	{
	    printf("stack is empty\n");
	}
	else
	    {
	    int i;
	    printf("stack elements are: ");
		for(i=0;i<=top;i++)
		{
		printf("%d ",stack[i]);
		}
	    }
	printf("\n");
    return(0);
    }

    isempty()
    {
	if(top==-1)
	{
	   return 1;
	}
	else
	{
	   return 0;
	}
    }

    peek()
    {
      printf("peek element is: %d\n",stack[top]);
    return(0);
    }

    pop()
    {
	if(isempty())
	{
	    printf("stack is underflow\n");
	}
	else
	{
	    printf("popped element is: %d\n",stack[top]);
	    top--;
	}
	return(0);
    }