#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "Rus");
	int n = 0;
	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 3) {
		int N = 0;
		float M = 0.0;
		printf("Введите количество секунд: ");
		scanf("%d", &N);

		M = (float)N / 60;
		printf("M=%f \n", M);
		printf("M=%d \n", N / 60);
	}
	else if (n == 4) {
		// 4.	Даны два неотрицательных числа a и b.
		// Найти их среднее геометрическое.
		unsigned int a = 0, b = 0;
		float c = 0;

		printf("Введите число а: ");
		scanf("%d", &a);

		printf("Введите число b: ");
		scanf("%d", &b);

		c = (float)(a + b) / 2;
		printf("c=%f \n", c);
	}
	else if (n == 5) {
		// 5.	Задание: составить структурную схему 
		// алгоритма и проект программы вычисления функции,
		// один параметр ввести с клавиатуры, 
		// а другой задать как константу, все вычисляемые значения
		// вывести на экран
		int v = 0;
		printf("Введите номер подзадания: ");
		scanf("%d", &v);

		if (v == 1) {
			float y = 0.0, e = 0.0;
			float c = 0.0, a = 0.0, b = 0.4, x = 3.5;
			printf("Введите значение е: ");
			scanf("%f", &e);

			y = pow(e, 2 * x) + pow(9.7, e);
			printf("y=%f \n", y);

			c = pow(a, 2) + sqrt(b*x);
			printf("c=%f \n", c);

			a = log(x);
			printf("a=%f \n", a);
		}
		else if (v == 2) {
			float y = 0.0, x = 1.3, a = 0.0, b = 0.0;
			float e = 0.0, c = 0.0;
			printf("Введите значение а: ");
			scanf("%f", &a);

			printf("Введите значение b: ");
			scanf("%f", &b);

			y = x*pow(a, 3) + pow(b, 3);
			printf("y=%f \n", y);

			a = log(x);
			printf("a=%f \n", a);

			printf("Введите значение е: ");
			scanf("%f", &e);

			b = pow(e, 2 * x) + a*x;
			printf("b=%f \n", b);
		}
		else if (v == 3) {
			float y = 0.0, a = 0.0, b = 0.0;
			float e = 0.0, x = 0.0, p = 1;

			printf("Введите значение а: ");
			scanf("%f", &a);
			printf("Введите значение b: ");
			scanf("%f", &b);

			y = pow(a, 3) / pow(b, 2);
			printf("y=%f \n", y);

			printf("Введите значение е: ");
			scanf("%f", &e);
			printf("Введите значение х: ");
			scanf("%f", &x);

			a = pow(e, sqrt(log(x)));
			printf("a=%f \n", a);

			b = sin(pow(p, 2)) + pow(x, 3);
			printf("b=%f \n", b);
		}
		else if (v == 4) {
			float y = 0.0, x = 2.7, a = 0.0, b = 0.0;
			float t = -6;
			printf("Введите значение а: ");
			scanf("%f", &a);
			printf("Введите значение b: ");
			scanf("%f", &b);

			y = sqrt(fabs(a - b*x));
			printf("y=%f \n", y);

			a = log(x);
			printf("a=%f \n", a);

			b = sqrt(pow(x, 2) + pow(t, 2));
			printf("b=%f \n", b);
		}
		
	}
	else if (n == 6) {
		//6.	Задание: составить структурную схему алгоритма
		// и проект программы, исходные 
		// данные ввести с клавиатуры,
		// результат вывести на экран.

		int c = 0;
		printf("Введите номер подзадания: ");
		scanf("%d", &c);

		if (c == 1) {
			// 1.	Тело движется по закону S =t3 – 3t2 + 2. 
			// Вычислить скорость тела в момент времени t. 
			// Значение t ввести с клавиатуры 
			// (Функция скорости есть производная 
			// от функции расстояния по времени).
			
			float S = 0.0, t = 0.0, v = 0.0;

			printf("Введите время t: ");
			scanf("%f", &t);

			S = pow(t, 3) - 3 * pow(t, 2) + 2;
			printf("Расстояние S = %f \n", S);

			v = S / t;
			printf("Скорость v = %f \n", v);
		}
		else if (c == 2) {
			//2.	Найти корни квадратного уравнения 
			// a·x2 + b·x + c = 0, введя с экрана коэффициенты 
			// a, b, c (коэффициент a не равен 0), для которых 
			// дискриминант положителен.
			unsigned int b = 0, c = 0, x = 0, y = 0;
			unsigned int a = 0;

			printf("Введите значение а: ");
			scanf("%d", &a);

			if (a==0) {
				printf("a change val for 1\n");
				a = 1;
			}
			printf("Введите значение b: ");
			scanf("%d", &b);

			printf("Введите значение с: ");
			scanf("%d", &c);

			y = a*pow(x, 2) + b*x + c;
			printf("y=%d \n", y);
		}
		else if (c == 3) {
			// 3.	Вычислить корень уравнения 2x/a +b-12=0
			// при различных значениях параметров a, b. 
			// Значения a, b ввести с экрана.

			float x = 0.0, y = 0.0, a = 0.0, b = 0.0;
			printf("Введите значение а: ");
			scanf("%f", &a);
			printf("Введите значение b: ");
			scanf("%f", &b);

			printf("Введите значение х: ");
			scanf("%f", &x);

			y = sqrt(fabs(((2 * x) / a) + b - 12));
			printf("y=%f \n", y);
		}
		else if (c == 4) {
			// 4.	Вычислить рентабельность работы предприятия
			// за месяц по формуле рент = прибыль/себестоимость100%, 
			// если себестоимость продукции в текущем месяце 
			// уменьшилась по сравнению с прошлым на 5 %. 
			// Значение прибыли и себестоимости за прошлый месяц 
			// ввести с экрана
			float rent = 0.0, p = 0.0, sbst = 0.0;

			printf("Введите прибыль p: ");
			scanf("%f", &p);
			printf("Введите себестоимость sbst: ");
			scanf("%f", &sbst);

			rent = (p / sbst)*100;
			printf("rent=%f \n", rent);

			sbst = sbst-( 5 * sbst / 100);
			printf("sbst=%f \n", sbst);
			rent = (p / sbst) * 100;
			printf("rent=%f \n", rent);
		}
	}
}