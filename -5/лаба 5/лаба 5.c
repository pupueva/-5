//5 лаба
#define CRT_NO_SECURE_DEPRECATE
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846

#include <stdio.h>
#include <locale.h> 
#include <stdlib.h>
#include <math.h>



double pp(double m, double l)
{
	const double d = 1.0;

	double numer = pow(cos(l), 3) + pow(2,m) * d;

	double domin = exp(l) + log(pow(sin(m), 2) + 7.4);
	
	return numer / domin;



}
int main()
{
	//задание 1
	setlocale(LC_CTYPE, "RUS");

	float gr;
	float result;

	printf("значение градусов:\n");
	scanf_s("%f", &gr);

	result = sin((gr * M_PI) / 180);

	printf("Результат вычисления sin %.1f:\n %.6f", gr, result);


	//2 задание 
	// контроль x=2.7    y=1.7576
	double x, y, b, a, t = -6;

	printf("введите x \n");
	scanf_s("%f", &x);

	a = log(x);
	b = sqrt(pow(x, 2) + pow(t, 2));
	y = pow(fabs(a - b * x), (float)1./5);
	printf("%.2lf %.2lf %.2lf", y,a,b);

	//задание 3
	int A = a;
	int B = b;
	int C = y;

	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0);
	{
		if (A % 2 == 0 || B % 2 == 0)
		{
			printf("\n1\n");
		}
		else
		{
			printf("\n0\n");
		}
	}


	//дз
	// контроль 7.1e-5      4       -0.09489
    // контроль 2.3e5       2.7     -0.654889
	double j,k,f;
	printf("введите x \n");
	scanf_s("%lg",&j);
	printf("введите y \n");
	scanf_s("%lg",&k);
	f = (sqrt(pow(2+k,2)+pow((sin(k+5)),(float)1/7)))/(log(j+1)-pow(k,3));
	printf("Функция равна %+.6lf", f);

}