#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int decide(char you ,char comp);
void main()
{
	int n; char comp;
	srand(time(0));
	n=rand()%100+1;
	if(n<=33)
		comp='r';
	else if (n>33&&n<=66)
		comp='p';
	else
		comp='s';
	char you;
	printf("enter the your option 'r' for rock , 'p' for paper and 's' for scisser = ");
	scanf("%c",&you);
	int result=decide(you,comp);
	
	printf("\nyou choose %c and opponent choose %c",you,comp);
	if(result==1)
		printf("\nyou win.");
	else if(result==-1)
		printf("\nyou lose.");
	else
		printf("\ndraw.");
}

int decide(char you ,char comp)
{
	if(you==comp)
		return 0;
	
	if(you=='r'&comp=='p')
		return -1;
	else if (you=='p'&comp=='r')
		return 1;
		
	else if (you=='r'&comp=='s')
		return 1;
	else if (you=='s'&comp=='r')
		return -1;
	
	else if (you=='p'&comp=='s')
		return -1;
	else if (you=='s'&comp=='p')
		return 1;
}
