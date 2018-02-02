#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
  clrscr();
  printf("enter the three values");
	scanf("%d%d%d",&a,&b,&c);
  	if (a>b && a>c)
    	{
		printf("%d\n",a);
	}
	if (b>a && b>c)
	{
		printf("%d\n", b);
	}
	if(c>a && c>b)
  {
		printf("%d\n", c);
	}
  getch();
  return 0;
  }
