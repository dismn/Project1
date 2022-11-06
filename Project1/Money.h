#pragma once
#include <iostream>
#include "Pair.h"
using namespace std;

class Money : protected Pair {

	Pair answer;
public:
	Money(Pair obj1, Pair obj2) {  //гривні і копійки
		answer = obj1 + obj2;
	}

	Money Div(Pair f);
	
	void show_answer() {
		answer.show();
	}

};