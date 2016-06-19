//Program to Multiply two Rational Numbers

#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
	} rational;
	
rational makerational (int,int);
rational mul_rational (rational,rational);

int main ()
{
	int a1,b1,a2,b2;
	printf("Enter the Numerator and Denominator of first Rational number : \n");
	scanf("%d %d",&a1,&b1);
	printf("Enter the Numerator and Denominator of second Rational number : \n");
	scanf("%d %d",&a2,&b2);
	
	rational r1=makerational(a1,b1);
	rational r2=makerational(a2,b2);
	rational product=mul_rational(r1,r2);
	printf("The product of these two Rational numbers is : %d/%d",product.numerator,product.denominator);
}

rational makerational(int a, int b)
{
	if (b==0)
	{
		printf("\n\aError");
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

rational mul_rational (rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator*r2.numerator);
	result.denominator=(r1.denominator*r2.denominator);
	return result;
}

