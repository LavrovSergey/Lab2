#include "Header.h"
#include<iostream>
#include <conio.h>
using namespace std;
int l17()
{
	setlocale(LC_ALL, "Russian");
	int x = 0;
	int y = 0;
	int n;
	cout << "������� ������� �� ����� ��������� �� ������(���������)";
	cin >> n;
	cout << "����� �������, ��� ���������� ���������� � ������ ������� ��������� ����� (0;0)" << endl;
	cout << "��������� ��������� ������� � ����� ������� ����(��������) ��������(���)" << endl;
	cout << "� ���� ����� ��� � ���-�� ����������� � �������� � ��������� ����������" << endl;
	for (int i = 0; i < n; i++)
	{
		x = rand() % 7 * 4 - 11;
		y = rand() % 6 * 7 - 18;
		cout << "(" << x << ";" << y << ")" << endl;
	}
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
}
int l5()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, x4, y1, y2, y3, y4, x, y;
	cout << "������� ������� ���������� ������ � ����� ����� ������, � ����� ������"<<endl;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cin >> x4 >> y4;

	x = ((x2 - x1) * (y3 * (x4 - x3) - x3 * (y4 - y3)) - (x4 - x3) * (y1 * (x2 - x1) - x1 * (y2 - y1))) / ((y2 - y1) * (x4 - x3) - (y4 - y3) * (x2 - x1));
	y = ((y2 - y1) * (x3 * (y4 - y3) - y3 * (x4 - x3)) - (y4 - y3) * (x1 * (y2 - y1) - y1 * (x2 - x1))) / ((x2 - x1) * (y4 - y3) - (x4 - x3) * (y2 - y1));

	bool f1 = 0, f2 = 0;

	if ((x >= x1 && x <= x2) || (x >= x2 && x <= x1)) { f1 = 1; }

	if ((y >= y1 && y <= y2) || (y >= y2 && y <= y1)) { f1 = 1; }
	else (f1 = 0);

	if ((x >= x3 && x <= x4) || (x >= x4 && x <= x3)) { f2 = 1; }

	if ((y >= y3 && y <= y4) || (y >= y4 && y <= y3)) { f2 = 1; }
	else (f2 = 0);

	if (f1 & f2)
	{
		cout << " ������������ � ����� (" << x << ";" << y<<")" << endl;
	}
	else {
		cout << "�� ������������" << endl;
	}
	int code;
	cout << "���� ������ ��������� � ����, ������� ������";
	code = _getch();
	if (code == 32) { main(); }
	else return 0;
	
}