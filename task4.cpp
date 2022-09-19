
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf_s("Світає, край неба палає;\n");
	printf_s("Соловейко в темнім гаї\n");
	printf_s("Сонце зустрічає.\n");
	printf_s("Тихесенько вітер віє;\n");
	printf_s("Степи, лани мріють;\n");
	printf_s("Між ярами над ставами\n");
	printf_s("Верби зеленіють...\n\n");

	int a, b, c, d;
	int s, d1, d2;

	printf_s("Введіть a = \n");
	scanf_s("%d", &a);
	printf_s("Введіть b = \n");
	scanf_s("%d", &b);
	printf_s("Введіть c = \n");
	scanf_s("%d", &c);
	printf_s("Введіть d = \n");
	scanf_s("%d", &d);

	d1 = (a * d) / (c * pow(d, 2));
	d2 = (c * d) / (b * a);
	s = d1 - d2; // звісно без перевірки ділення на нуль працює так собі(

	printf_s("Результат = %d\n", s);
	return 0;
}