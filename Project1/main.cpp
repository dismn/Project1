//Copyright (c), Semeniuta Diana 202 TN, 2022
/*�������� ���� Pair (���� ����� �����); ��������� ����� ��������
�� ����� � �������� ��������� ��� (a, b) + (c, d) = (a + b, c + d).. ���������
����-���������� Money � ������: ����� � ������. ������������� �������� ��������� � ��������� ������ ��������
*/


#include<iostream>
#include"Pair.h"
#include"Money.h"
using namespace std;

int main() {
	Pair p(5, 2);
	Pair p2(9, 3);
	Money o(p, p2);
	o.show_answer();
}