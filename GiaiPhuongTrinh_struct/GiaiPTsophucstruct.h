#pragma once

#include<iostream>
#include<cmath>

using namespace std;

struct complexnum
{
	double real;
	double img;
	char i;
};

int GiaiPTsophucloai1(complexnum a, complexnum b, complexnum& c);
int GiaiPTsophucloai2(complexnum a, complexnum b, complexnum c, complexnum d, complexnum A, complexnum B, complexnum& C);
