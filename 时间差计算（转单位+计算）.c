#include<stdio.h>
int main()
{
	int hour1,minute1;
	printf("hour1 minute1\n");
	scanf("%d %d",&hour1,&minute1);
	int hour2,minute2;
	printf("hour2 minute2\n");
	scanf("%d %d",&hour2,&minute2);
	int a=60*hour1+minute1;
	int b=hour2*60+minute2;
	int c=a-b;
	printf("%d %d",c/60,c%60);
	return 0;
}
