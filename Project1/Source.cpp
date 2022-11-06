#include<iostream>
#include"Pair.h"
#include "Money.h"
using namespace std;


Pair Pair::Mul(Pair f) {
	f.a = this->a * f.b;
	f.b = this->b * f.a;
	return f;
}

Pair Pair::Add(Pair f) {
	f.a = this->a + f.b;
	f.b = this->b + f.a;
	return f;

}

