#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float d,r1,r2;
	
scanf("%d %d %d",&a,&b,&c);
 d=(b*b-4*a*c);
 
 if(d>=0)
 {
 	r1=(-b+sqrt(d))/(2*a);
 	r2=(-b-sqrt(d))/(2*a);
 	printf("Roots %f and %f",r1,r2);
 }
 
 else
 {
 	printf("Roots are imaginary");
 }
	
}
