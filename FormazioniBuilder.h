#pragma once
#include <iostream>
#include "FormazioniContainer.h"
using namespace std;

string squadra1 = "Milan";
string squadra2 = "Inter";
string squadra3 = "Juventus";

class FormazioniBuilder
{

	FormazioniContainer f;
public:
	string NameBuilder(int n) {
		switch (n)
		{
		case 1:
			return squadra1;
			break;
		case 2:
			return squadra2;
			break;
		case 3:
			return squadra3;
			break;
		}
	}

	string FormBuilder(int n) {
		switch(n){
		case 1:
			return f.Milan;
		case 2:
			return f.Inter;
		case 3:
			return f.Juventus;
		}
	}

};
