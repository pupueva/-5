#define CRT_NO_SECURE_DEPRECATE
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846

#include <locale.h>
#include <locale.h> 
#include <stdlib.h>
#include <math.h>



double pupu(double xx, double yy)
{
	const double d = 1.0;
	double xy;
	double yx;

	double numer = pow(cos(yx), 3) + pow(2, xy) * d;

	double domin = exp(yx) + log(pow(sin(xy), 2) + 7.4);
	double resultxy = numer / domin;



}
int main()
{
	//������� 1
	setlocale(LC_CTYPE, "RUS");

	float gr;
	float result;

	printf("�������� ��������:\n");
	scanf_s("%f", &gr);

	result = sin((gr * M_PI) / 180);

	printf("��������� ���������� sin %.1f:\n %.6f", gr, result);


	//2 ������� 
	// �������� x=2.7    y=1.7576
	float x, y, b, a, t = -6;
	printf("������� x \n");
	scanf_s("%f", &x);
	a = log(x);
	b = sqrt(pow(x, 2) + pow(t, 2));
	y = pow(fabs(a - b * x), (float)1 / 5);
	printf("y ����� %.4f", y);

	//������� 3
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


	//��
	// �������� 0.000071    4       -0.09489
	// �������� 230000      2.7     -0.654889

	float x, y, f;
	printf("������� x \n");
	scanf_s("%f", &x);
	printf("������� y \n");
	scanf_s("%f", &y);
	f = (sqrt(pow(2 + y, 2) + pow((sin(y + 5)), (float)1 / 7))) / (log(x + 1) - pow(y, 3));
	printf("������� ����� %+.6f", f);

	return 0;
}