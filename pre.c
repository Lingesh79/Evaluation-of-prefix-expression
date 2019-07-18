#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char expression[100];
	int stack[100];
	int top=-1;
	int a,A,B,C;
	int i,j,k;
	int length;
	printf("\n enter the valid prefix expression to be evaluated\n");
        printf("\n NOTE:\n the prefix expression must contain only operators '+' , '-' , '*' , '/' and '^'\n");
	printf("\n only single digit numbers are accepted \n");
	scanf("\n%s",expression);
	printf("\n the expression to be evaluated is \n %s",expression);
	length=strlen(expression);
	printf("\n the length of the expression is \n%d",length);
	for(i=length-1;i>=0;i--)
	{
		printf("\n the character evaluated is\n %c",expression[i]);
		switch(expression[i])
		{
			case '+':if(top==-1)
				{
					printf("\n stack underflow\n");
				}
				else
				{
					A=stack[top--];
					printf("\n the item popped out of stack is \n%d",A);
					B=stack[top--];
					printf("\n the item popped out of stack is \n%d",B);
					C=A+B;
				}
				if(top==99)
				{
					printf("\n stack overflow\n");
				}
				else
				{
					printf("\n the item to be pushed into stack is \n%d",C);
					stack[++top]=C;
				}
				printf("\n the stack after performing '+' operation is\n");
				for(j=top;j>=0;j--)
				{
					printf("\n %d",stack[j]);
				}
				break;
			case '-':if(top==-1)
				{
					printf("\n stack underflow\n");
				}
				else
				{
					A=stack[top--];
					printf("\n the item popped out of stack is \n%d",A);
					B=stack[top--];
					printf("\n the item popped out of stack is \n%d",B);
					C=A-B;
				}
				if(top==99)
				{
					printf("\n stack overflow\n");
				}
				else
				{
					printf("\n the item to be pushed into stack is \n%d",C);
					stack[++top]=C;
				}
				printf("\n the stack after performing '-' operation is\n");
				for(j=top;j>=0;j--)
				{
					printf("\n %d",stack[j]);
				}
				break;
			case '*':if(top==-1)
				{
					printf("\n stack underflow\n");
				}
				else
				{
					A=stack[top--];
					printf("\n the item popped out of stack is \n%d",A);
					B=stack[top--];
					printf("\n the item popped out of stack is \n%d",B);
					C=A*B;
				}
				if(top==99)
				{
					printf("\n stack overflow\n");
				}
				else
				{
					printf("\n the item to be pushed into stack is \n%d",C);
					stack[++top]=C;
				}
				printf("\n the stack after performing '*' operation is\n");
				for(j=top;j>=0;j--)
				{
					printf("\n %d",stack[j]);
				}
				break;
			case '/':if(top==-1)
				{
					printf("\n stack underflow\n");
				}
				else
				{
					A=stack[top--];
					printf("\n the item popped out of stack is \n%d",A);
					B=stack[top--];
					printf("\n the item popped out of stack is \n%d",B);
					C=A/B;
				}
				if(top==99)
				{
					printf("\n stack overflow\n");
				}
				else
				{
					printf("\n the item to be pushed into stack is \n%d",C);
					stack[++top]=C;
				}
				printf("\n the stack after performing '/' operation is\n");
				for(j=top;j>=0;j--)
				{
					printf("\n %d",stack[j]);
				}
				break;
			case '^':if(top==-1)
				{
					printf("\n stack underflow\n");
				}
				else
				{
					A=stack[top--];
					a=A;
					printf("\n the item popped out of stack is \n%d",A);
					B=stack[top--];
					printf("\n the item popped out of stack is \n%d",B);
				}
				for(k=1;k<B;k++)
				{
					A=A*a;
				}
				C=A;
				if(top==99)
				{
					printf("\n stack overflow\n");
				}
				else
				{
					printf("\n the item to be pushed into stack is \n%d",C);
					stack[++top]=C;
				}
				printf("\n the stack after performing '^' operation is\n");
				for(j=top;j>=0;j--)
				{
					printf("\n %d",stack[j]);
				}
				break;
			default:printf("\n the item to be pushed into stack is \n%c",expression[i]);
				stack[++top]=expression[i]-'0';
				printf("\n the stack after push operation is\n");
				for(j=top;j>=0;j--)
				{
					printf("\n %d",stack[j]);
				}
				break;
		}
	}
	printf("\n the resultant value of the given expression is \n%d\n",stack[top]);
	return(0);
}
