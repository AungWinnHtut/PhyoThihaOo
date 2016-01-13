#include<stdio.h>
#include<conio.h>
int main()
{
	float A=0.0;
	float r=0.0;
	float b=0.0;
	float c=0.0;
	float z=0.0;


	printf("please enter r in (m) ");
	scanf("%f",&r);
	printf("please enter b in (m) ");
	scanf("%f",&b);
	printf("please enter c in (m) ");
	scanf("%f",&c);
	printf("please enter z in (m) ");
	scanf("%f",&z);

	A=3.14*r*b*c/z;

	printf("Area is = %f (sq m)",A);

	_getch();
	return 0;
}

	////Variable declaration, initialization
	////A (2) float (3) out (4)
	//float A=0.0;
	////R (2) float (3) in (4)
	//float R=0.0;

	////Asking inputs and read them
	//printf("Please Enter R in (m) ");
	//scanf("%f",&R);

	////Calculation
	////A=3.1415*R*R; (1)
	//A=3.1415*R*R;

	////Output results
	////print out
	//printf("Area of circle = %f (sq m)",A);