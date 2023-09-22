#include<stdio.h>
int main()
{
	int a,b;
	printf("please input your foot and inch\neg:foot inch\n");
	scanf("%d %d",&a,&b);
	printf("height:%f\n",((a+b/12.0)*0.3048));
	return 0; 
	
 } 
