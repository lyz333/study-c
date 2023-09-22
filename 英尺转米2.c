#include<stdio.h>
int main()
{
double a,b;
printf("foot inch\n");
scanf("%lf %lf",&a,&b);
printf("height=%f",((a+b/12)*0.3048));
return 0;	
}
