#pragma once
#include <iostream>
using namespace std;

class Pair {
private: 
	int a, b;
public:
	Pair(int a, int b) {
		this->a = a;
		this->b = b;
	}
	Pair() {}

	Pair Mul(Pair f);
	Pair Add(Pair f);


	Pair operator +(Pair f) {
		f.a += this->a;
		f.b += this->b;
		return f;
	}
	
	Pair operator = (Pair obj) {
		this->a = obj.a;
		this->b = obj.b;
		return obj;
	}
	void show() {
		std::cout << a << "\t" << b;
	}
};