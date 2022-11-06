//Copyright (c), Semeniuta Diana 202 TN, 2022
/*Створити клас Pair (пари цілих чисел); визначити метод множення
на число й операцію додавання пар (a, b) + (c, d) = (a + b, c + d).. Визначити
клас-спадкоємець Money з полями: гривні й копійки. Перевизначити операцію додавання й визначити методи віднімання
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