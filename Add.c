//Program to ADD two Rational Numbers

#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
	} rational;

rational makerational (int,int);
rational sum_rational (rational,rational);

int main ()
{
	int a1,b1,a2,b2;
	printf("Enter Numerator and Denominator of first Rational number : \n");
	scanf("%d%d",&a1,&b1);
	printf("Enter Numerator and Denominator of second Rational number : \n");
	scanf("%d%d",&a2,&b2);
	
	rational r1=makerational(a1,b1);
	rational r2=makerational(a2,b2);
	rational r3=sum_rational(r1,r2);
	printf("The sum is %d/%d",r3.numerator,r3.denominator);
}

rational makerational(int a, int b)
{
	if (b==0)
	{
		exit(0);
	}
	else 
	{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	return r_number;
	}
}

rational sum_rational (rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
	result.denominator=(r1.denominator*r2.denominator);
	return result;
}

