
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf_s("����, ���� ���� ����;\n");
	printf_s("��������� � ����� ��\n");
	printf_s("����� �������.\n");
	printf_s("���������� ���� ⳺;\n");
	printf_s("�����, ���� �����;\n");
	printf_s("̳� ����� ��� �������\n");
	printf_s("����� ��������...\n\n");

	int a, b, c, d;
	int s, d1, d2;

	printf_s("������ a = \n");
	scanf_s("%d", &a);
	printf_s("������ b = \n");
	scanf_s("%d", &b);
	printf_s("������ c = \n");
	scanf_s("%d", &c);
	printf_s("������ d = \n");
	scanf_s("%d", &d);

	d1 = (a * d) / (c * pow(d, 2));
	d2 = (c * d) / (b * a);
	s = d1 - d2; // ����� ��� �������� ������ �� ���� ������ ��� ���(

	printf_s("��������� = %d\n", s);
	return 0;
}