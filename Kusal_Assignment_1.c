#include<stdio.h>
#include<conio.h>
typedef struct {
      int numerator;
      int denomenator;
      }rational;
rational make_rational(int,int);
rational add_rational(rational,rational);
rational product_rational(rational ,rational);
rational equal_rational(rational, rational);
int main()
{
rational r1=make_rational(1,3);
rational r2=make_rational(1,3);
rational r3=add_rational(r1,r2);
rational r4=product_rational(r1,r2);
equal_rational(r1,r2);
printf("The product of rational numbers is %d/%d.\n",r4.numerator,r4.denomenator);
printf("The sum of rational number is %d/%d.",r3.numerator,r3.denomenator);

}
rational make_rational(int a,int b)
{
         rational r_number;
         r_number.numerator=a;
         r_number.denomenator=b;
         return r_number;
}
rational add_rational(rational a ,rational b)
{
	
         rational result;
         result.numerator=(a.numerator*b.denomenator+a.denomenator*b.numerator);
         result.denomenator=(a.denomenator*b.denomenator);
         return result;
}
rational product_rational(rational a, rational b)
{
	rational product;
	product.numerator=(a.numerator*b.numerator);
	product.denomenator=(a.denomenator*b.denomenator);
	return product;
}
rational equal_rational(rational a,rational b)
{
	rational equal;
	if(a.numerator==b.numerator&&a.denomenator==b.denomenator)
	{
		printf("The provided rational numbers are equal.\n");
	}
	else
	{
		printf("The provided rational numbers are not equal.\n");
	}
}

