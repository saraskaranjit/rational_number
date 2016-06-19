//Program to Check the equality of two Rational Numbers

#include <stdio.h>

typedef struct {
	int numerator;
	int denominator;
	} rational;
	
rational makerational (int,int);
int equal_rational (rational,rational);

int main ()
{
	int a1,b1,a2,b2,final;
	printf("Enter Numerator and Denominator of first Rational number : \n");
	scanf("%d%d",&a1,&b1);
	printf("Enter Numerator and Denominator of second Rational number : \n");
	scanf("%d%d",&a2,&b2);
	
	rational r1=makerational(a1,b1);
	rational r2=makerational(a2,b2);
	final=equal_rational(r1,r2);
	
	if (final==1)
	{
		printf("The two Rational numbers %d/%d and %d/%d are equal!",a1,b1,a2,b2);
	}
	else
	{
		printf("The two Rational numbers %d/%d and %d/%d are not equal!",a1,b1,a2,b2);
	}
	return 0;
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

int equal_rational (rational r1,rational r2)
{
	int first,second;
	first=(r1.numerator*r2.denominator);
	second=(r1.denominator*r2.numerator);
	if (first==second)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

