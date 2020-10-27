#include<stdio.h>
#include<math.h>
void main()
{ double a,b;
printf("Enter the degree : ");
scanf("%lf",&a);


a=(a*3.14)/1800;
b=sin(a);
printf("Sine is %lf",b);
}
